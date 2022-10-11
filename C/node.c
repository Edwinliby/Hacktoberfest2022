#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
    {
        int num;
        struct node *ptr;
    };
typedef struct node NODE;
NODE *newnode, *first, *temp = 0;

int insert_first()
{
NODE *temp1;
temp1  = (NODE *)malloc(sizeof(NODE));
printf("Enter the data item: ");
scanf("%d", & temp1->num);
temp1->ptr=first;
first=temp1;
return 0;
}

int insert_last()
{
	NODE *temp2;
	temp2=(NODE*)malloc(sizeof(NODE));
	printf("Enter the data item: ");
	scanf("%d",&temp2->num);
	NODE*p=first;
	while(p->ptr!=NULL)
	{
		p=p->ptr;
	}
	p->ptr=temp2;
	temp2->ptr=NULL;
	return 0;
}
    

int create()
{
 int choice=1;
while (choice)
    {
	newnode  = (NODE *)malloc(sizeof(NODE));
	printf("Enter the data item: ");
	scanf("%d", &newnode-> num);
	if (first != 0)
	
{
	 temp->ptr = newnode;
	    temp = newnode;
}
else
{						
	    first = temp = newnode;
	}
	printf("\nDo you want to continue(Type 0 or 1)?: ");
	scanf("%d", &choice);
 }
    temp->ptr = 0;
return 0;
}

int display()
{
int count = 0;
temp=first;
printf("\nThe linked list is: ");
    while (temp != 0)
    {
	printf("%d=>", temp->num);
	count++;
	temp = temp->ptr;
    }
printf("NULL\n");
printf("No. of nodes in the list = %d\n", count);
return 0;
}

int main()
{
    int ch,m,position;
    first = 0;
    while(1)
    {
printf("\nPress 0 for Exit\nPress 1 for Create\nPress 2 for Diplay\nPress 3 for insert at the first position\nPress 4 for insertion at the end\nPress 5 for insert at the given position");
    printf("\nEnter your option: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0: exit(0);
	   break;
    case 1: create();
	    break;
    case 2: display();
	    break;
    case 3: insert_first();
	    break;
	case 4: insert_last();
		break;
	case 5: printf("Enter the element: ");
		       scanf("%d",&m);
		       printf("Enter the position after which this element is inserted: ");
		       scanf("%d",&position);
		       
		       break;
    default: printf("Wrong Input\n");
    }
    }
}