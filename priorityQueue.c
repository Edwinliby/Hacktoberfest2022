#include<stdio.h>
#define N 20
int Q[N],Pr[N];
int r = -1,f = -1;
void enqueue(int data,int p)
{
 int i;
 if((f==0)&&(r==N-1)) 
  printf("Queue is full");
 else
 {
  if(f==-1)
  {
   f = r = 0;
   Q[r] = data;
   Pr[r] = p;

  }
  else if(r == N-1)
  {
   for(i=f;i<=r;i++)
   {
     Q[i-f] = Q[i];
     Pr[i-f] = Pr[i];
     r = r-f;
     f = 0;
     for(i = r;i>f;i--)
    {
     if(p>Pr[i])
     {
      Q[i+1] = Q[i];
      Pr[i+1] = Pr[i];
     }
     else
      break;
     Q[i+1] = data;
     Pr[i+1] = p;
     r++;
    }
   }
  }
  else
  {
   for(i = r;i>=f;i--)
   {
    if(p>Pr[i])
    {
     Q[i+1] = Q[i];
     Pr[i+1] = Pr[i]; 
    }
    else
     break;
   }
   Q[i+1] = data;
   Pr[i+1] = p;
   r++;
  } 
 }

}
void display()
{
int i;
 for(i=f;i<=r;i++)
 {
  printf("\nElement = %d\t Priority = %d",Q[i],Pr[i]);
 }
}
int dequeue()
{
 if(f == -1)
 {
  printf("Queue is Empty");
 } 
 else
 {
  printf("deleted Element = %d\t Its Priority = %d",Q[f],Pr[f]);
  if(f==r)
   f = r = -1;
  else
   f++;
 }
}
int main()
{
 int opt,n,i,data,p;
  do{
  printf("\n\nOPERATIONS IN QUEUE");
  printf("\n\n1 ENQUEUE \n2 DEQUEQUE \n3 DISPLAY\n4 Exit\n");
  printf("\n Enter the choice :");
  scanf("\n%d",&opt);
  switch(opt)
  {
   case 1:
    printf("\nEnter the number of data:\n");
    scanf("%d",&n);
    printf("\nEnter your data and Priority of data:\n");
    i=0;
    while(i<n)
    {
      printf("\ndata :");
     scanf("%d",&data);
      printf("\npriority :");
      scanf("%d",&p);
     enqueue(data,p);
     i++;
    }
    break;
   case 2:
    dequeue();
    break;
   case 3:
     display();
    break;
    case 4:
      printf("EXIT\n");
    break;
   default:
    printf("\nIncorrect Choice");

  }
 }while(opt!=4);
        return 0;
}
