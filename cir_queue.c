#include<stdio.h>
#include<stdlib.h>

int a[20], front = -1,rear = -1, item, n;
int enqueue();
int dequeue();
int display();

int main()
{
  int ch,choice =0;
  printf("Enter the max array size: ");
  scanf("%d",&n);
  while( choice != 4)
  {
    printf("\nOperations");
    printf("\n1. Enqueue");
    printf("\n2. Dequeue");
    printf("\n3. Display Queue");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
     switch(ch)
	{
	  case 1:
	  {
	   enqueue();
 	   break;
	  }
	  case 2:
	  {
	   dequeue();
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

int enqueue()
{
	printf("\nEnter the value:");
	scanf("%d",&item);
	if(front == -1 && rear == -1)
	{
		front =0,rear = 0;
	 	a[rear] = item;
	}
	else if(front == (rear+1)%n)
		printf("\nOverflow !!\n");
	else
	{
		rear++;
		a[rear]=item;
	}	
}

int dequeue()
{
	if(front == -1)
		printf("\nUnderflow !!\n");
	else if(front == rear)
	{
		item = a[front];
		front =-1, rear = -1;
	}
	else
	{
		item = a[front];
		front++;
	}
}

int display()
{
	if(front == -1)
		 printf("\nEmpty Queue !!\n");
	else
	 {
		printf("\nQueue is :");
        	for (int i = front; i <= rear; i++)
            		{printf("%d",a[i]);
			 printf(" ");
			}
	 }
	
}
