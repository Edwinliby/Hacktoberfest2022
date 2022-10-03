#include <stdlib.h>
#include <stdio.h>

int n;
struct node
{
    int data;
    struct node *link;
};

struct node *ptr;

void traverse()
{
    struct node *temp;
    if (ptr == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = ptr;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}

void push()
{
    int data;
    struct node *temp = malloc(sizeof(struct node));
    for (int i = 0; i < n; i++)
    {
        if (temp == NULL)
            printf("Unable to push");
        else
        {
            printf("\nEnter number to be inserted : ");
            scanf("%d", &data);
            if (ptr == NULL)
            {
                temp->data = data;
                temp->link = NULL;
                ptr = temp;
            }
            else
            {
                temp->data = data;
                temp->link = ptr;
                ptr = temp;
            }
        }
    }
}

void pop()
{
    struct node *temp;
    if (ptr == NULL)
        printf("\nList is Empty\n");
    else
    {
        printf("%d is deleted", ptr->data);
        temp = ptr;
        ptr = ptr->link;
        free(temp);
    }
}

int main()
{
    int ch;
    printf("Enter the limit:");
    scanf("%d", &n);
    while (ch != 4)
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
            push();
            break;
        case 3:
            pop();
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}