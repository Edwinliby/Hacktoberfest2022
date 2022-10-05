#include<stdio.h>
#include<stdlib.h>

int i,j,n,top=-1,a[10];
int push();
int pop();
int display();

int main()
{
  int ch,choice =0;
  printf("Enter the max array size: ");
  scanf("%d",&n);
  while( choice != 4)
  {
    printf("\nOperations");
    printf("\n1. Insert Element");
    printf("\n2. Delete Element");
    printf("\n3. Display Stack");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
     switch(ch)
	{
	  case 1:
	  {
	   push();
 	   break;
	  }
	  case 2:
	  {
	   pop();
 	   break;
	  }
 	  case 3:
	  {
	   display();
 	   break;
	  }
	  case 4:
	  {
	   exit(0);
	  }
	  default:
	  {
	   printf("\nInvalid Choice!!!\n");
	   exit(0);
 	  }
	}
  }
}

int push()
{
 int item;
 if(top == n-1 )
   printf("\nOverflow\n");
 else
  {
   printf("\nEnter the element:");
   scanf("%d",&item);
   top++;
   a[top] = item;
  }
}


int pop()
{
 int item;
 if(top==-1)
  printf("\nUnderflow\n");
 else
 {
  printf("\nDeleted element: %d",a[top]);
  item = a[top];
  top--;
 }
}

int display()
{
 int i;
 if(top==-1)
  printf("\nUnderflow\n");
 else
 {
 for(i=top;i>=0;i--)
 {
  printf("%d",a[i]);
  printf(" ");
 }
}
}
  
  
