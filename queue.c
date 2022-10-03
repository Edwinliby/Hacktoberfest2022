#include <stdio.h>
#include<stdlib.h>
 
void insert();
void delete();
void display();
int queue[50];
int rear = - 1, front = - 1;
int i, n;

int main()
{
    int ch,choice = 0;
    printf("Enter the max array size: ");
    scanf("%d",&n);
    while (choice != 4)
    {
        printf("\n1.Insert element to queue");
        printf("\n2.Delete element from queue");
        printf("\n3.Display all elements of queue");
        printf("\n4.Quit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Invalid Choice\n");
        } 
    } 
} 
 
void insert()
{
    int add_item;
    printf("\nInset the element in queue : ");
    scanf("%d", &add_item);
    if (rear == n - 1)
    printf("\nQueue Overflow !!");
    else
    {
        if (front == - 1)
        front = 0;
        rear = rear + 1;
        queue[rear] = add_item;
    }
}
 
void delete()
{
    int item;
    if(front == -1)
		printf("\nUnderflow !!\n");
	else if(front == rear)
	{
		item = queue[front];
		front =-1, rear = -1;
	}
	else
	{
		item = queue[front];
		front++;
	}
}
 
void display()
{
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}