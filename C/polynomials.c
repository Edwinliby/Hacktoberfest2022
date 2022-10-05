/*Perform all operations on Polynomials using linked list*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int coeff;
	int expo;
	struct node *next;
};

struct node *head1,*head2,*temp,*newnode;

struct node *create(struct node *);
void display(struct node *);
void add(struct node*, struct node *);
void subtract(struct node*, struct node *);
void multiply(struct node*, struct node *);
int high_pow(struct node *start);

int main(){
	printf("Enter the polynomial 1:\n\n");
	head1=create(head1);
	printf("\nThe 1st polynomial is : ");
	display(head1);
	printf("\n\nEnter the polynomial 2:\n\n");
	head2=create(head2);
	printf("\nThe 2nd polynomial is : ");
	display(head2);
	add(head1,head2);
	subtract(head1,head2);
	multiply(head1,head2);
}

struct node *create(struct node *head){
	int pow=0;
	int flag;
	do{
		if(head==NULL){
			newnode=(struct node *)malloc(sizeof(struct node));
			head=newnode;
			temp=newnode;
			printf("Enter the coeff of x^%d: ",pow);
			scanf("%d", &temp->coeff);
			temp->expo=pow;
			temp->next=NULL;
		}
		else{
			newnode=(struct node *)malloc(sizeof(struct node));
			temp->next=newnode;
			temp=newnode;
			printf("Enter the coeff of x^%d: ",pow);
			scanf("%d", &temp->coeff);
			temp->expo=pow;
			temp->next=NULL;
		}
		printf("To continue press 1 or To stop press 0: ");
		scanf("%d", &flag);
		
		pow++;
	}while(flag==1);
	
	return head;
}

void display(struct node *head){
	temp=head;
	while(temp->next!=NULL){
		printf("%d x^%d + ", temp->coeff, temp->expo);
		temp=temp->next;
	}
	printf("%d x^%d", temp->coeff, temp->expo);
	
}

void add(struct node *temp1, struct node *temp2){
	printf("\n\nAfter adding we get:\n");
	while(temp1!=NULL || temp2!=NULL){
		if(temp1->expo==temp2->expo){
			if(temp1==head1 && temp2==head2)
				printf(" %d x^%d ",(temp1->coeff+temp2->coeff), temp1->expo );
			else
				printf("+ %d x^%d ",(temp1->coeff+temp2->coeff), temp1->expo );
		}
		
		else if(temp1->expo>temp2->expo){
			if(temp1==head1)
				printf("%d x^%d ", temp1->coeff, temp1->expo);
			
			else
				printf("+ %d x^%d ", temp1->coeff, temp1->expo);
		}
			
		else{
			if(temp2==head2)
				printf("%d x^%d ", temp2->coeff, temp2->expo);
			else
				printf("+ %d x^%d ", temp2->coeff, temp2->expo);
		}
	
		if(temp2->next==NULL && temp1->next!=NULL)
			temp1=temp1->next;
		else if(temp1->next==NULL && temp2->next!=NULL)
			temp2=temp2->next;
		else{
			temp1=temp1->next;
			temp2=temp2->next;
		}
	}
}

void subtract(struct node *temp1, struct node *temp2){
	printf("\n\nAfter subtracting we get:\n");
	while(temp1!=NULL || temp2!=NULL){
		if(temp1->expo==temp2->expo){
			if(temp1==head1 && temp2==head2)
				printf(" %d x^%d ",(temp1->coeff-temp2->coeff), temp1->expo );
			else
				printf("+ %d x^%d ",(temp1->coeff-temp2->coeff), temp1->expo );
		}
		
		else if(temp1->expo>temp2->expo){
			if(temp1==head1)
				printf("%d x^%d ", temp1->coeff, temp1->expo);
			
			else
				printf("+ %d x^%d ", temp1->coeff, temp1->expo);
		}
			
		else{
			if(temp2==head2)
				printf("%d x^%d ", temp2->coeff, temp2->expo);
			else
				printf("+ %d x^%d ", (-1)*temp2->coeff, temp2->expo);
		}
	
		if(temp2->next==NULL && temp1->next!=NULL)
			temp1=temp1->next;
		else if(temp1->next==NULL && temp2->next!=NULL)
			temp2=temp2->next;
		else{
			temp1=temp1->next;
			temp2=temp2->next;
		}
	}
}

void multiply(struct node *temp1, struct node *temp2){
	printf("\n\nAfter multiplying we get:\n");
	int count1=high_pow(temp1);
	int count2=high_pow(temp2);
	int n=0;
	struct node *head=NULL;
	temp=head;
	
	while(n<=count1+count2){
		n++;
		
		if(temp==NULL){
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->expo=n-1;
			head=newnode;
			temp=newnode;
			temp->coeff=0;
			temp->next=NULL;
		}
		else{
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->expo=n-1;
			temp->next=newnode;
			temp=newnode;
			temp->coeff=0;
			temp->next=NULL;
		}
	}

		temp=head;
		while(temp1!=NULL){
			temp2=head2;
			while(temp2!=NULL){
				temp=head;
				while(temp!=NULL){
					if(temp->expo==temp1->expo+temp2->expo){
						temp->coeff=temp->coeff +(temp1->coeff*temp2->coeff);
						break;
					}
					else{
						temp=temp->next;
					}
				}
				temp2=temp2->next;
			}
			temp1=temp1->next;
		}

	display(head);
}

int high_pow(struct node *start){
	int count=0;
	while(start!=NULL){
		count=start->expo;
		start=start->next;	
	}
	
	return count;
}
