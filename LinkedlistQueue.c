#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front;
struct node *rear;

void enqueue()
{
    int data;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
        printf("\nList is empty !\n");
    else
    {
        printf("\nEnter number to be inserted : ");
        scanf("%d", &data);
        temp->data = data;
        if(front == NULL)
        {
            front = temp;
            rear = temp;
            front->link = NULL;
            rear->link = NULL;
        }
        else
        {
            rear->link=temp;
            rear=temp;
            rear->link = NULL;
        }
    }
}

void traverse()
{
    struct node *temp;
    temp=front;
    if(front == NULL)
        printf("\nList is empty !\n");
    else
    {   
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}

void dequeue()
{
    struct node *temp;
    if(front == NULL)
        printf("\nList is empty !\n");
    else
    {
        printf("%d is deleted",front->data);
        temp=front;
        front = front->link;
        free(temp);
    }
}

int main()
{
    int ch;
    while(ch != 4) 
    {
        printf("\n1. Display list\n");
        printf("2. Insert an element\n");
        printf("3. Delete an element\n");
        printf("Enter Choice :");
        scanf("%d", &ch);
        switch (ch) 
        {
        case 1:
            traverse();
            break;
        case 2:
            enqueue();
            break;
        case 3:
            dequeue();
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}