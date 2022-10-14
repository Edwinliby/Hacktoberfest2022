#include<stdio.h>
#include<ctype.h>

int stack[50];
int top=-1;
char infix[50],postfix[50];
int counter=-1;

void push(int);
int pop();
int peek();
void display();
int precedence(char);
void post();

void main()
{
    int i,a,b;
    printf("enter the infix expression :\n");
    scanf("%s",&infix);
    post();
    printf("this postfix %s\n",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i])!=0)
        push((postfix[i]-48));
        else
        {
            a = pop();
            b = pop();
            if(postfix[i]=='%')
                push((b%a));
            else if(postfix[i]=='/')
                push((b/a));            
            else if(postfix[i]=='*')
                push((b*a));            
            else if(postfix[i]=='+')
                push((b+a));            
            else if(postfix[i]=='-')
                push((b-a));                   
        }
    } 
    a = pop();
    if(top==-1)
    printf("The answer is %d",a);
    else
    printf("invalid expression");   
}

void push(int x)
{
    stack[++top]=x;
}

int pop()
{
    return stack[top--];
}

int peek()
{
    return stack[top];
}

void display()
{
    int i;
    printf("THE STACK HAS:\n");
    for(i=0;i<=top;i++)
        printf("%d ",stack[i]);
    printf("\n");
}

int precedence(char a)
{
    if (a == '*' || a== '/' || a=='%')
        return 2;
    else if(a=='+'||a=='-')
        return 1;
    else
        return 0;
    
}

void post()
{
    int i,a;
    for(i=0;infix[i]!='\0';i++);
    infix[i]=')';
    infix[i+1]='\0';
    stack[0]='(';
    top = 0;
    for(i=0;infix[i]!='\0';i++)
    {
        if(infix[i]=='(')
            push(infix[i]);
        else if (isdigit(infix[i])!=0)
            postfix[++counter]=infix[i];
        else if(infix[i]==')')
        {
            while(1)
            {
                if(peek()=='(')
                break;
                else
                postfix[++counter]=pop();
            }
            a = pop();
        }
        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='%'||infix[i]=='*'||infix[i]=='/')
        {
            while(precedence(peek())>=precedence(infix[i]))
            {
                postfix[++counter]=pop();
            }
            push(infix[i]);
        }
    }
    postfix[++counter]='\0';
}
