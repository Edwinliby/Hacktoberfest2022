#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int info;
    struct node *next;
}*head=NULL;
// void trav_fwd_bck(){
//     struct node *q, *p;
//     // forward
//     for(q=head;q!=NULL;q=q->next){
//         printf("%d ",q->info);
//         if(q->next==NULL)
//             p=q;
//     }
//     //backward
//     for(;p!=NULL;p=p->next){
//         printf("%d ",p->info);
//     }
// }
void display(struct node *ptr){
    
    printf("Elements are: ");
    while(ptr!=NULL){
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}

void insert_beg(){
    struct node *temp;
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nENter the value for beg: ");
    scanf("%d",&item);
    temp->prev=NULL;
    temp->info=item;
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
}
void insert_end(){
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    int item;
    printf("\nEnter the value to insert at end: ");
    scanf("%d",&item);
    temp->info=item;
    // temp->next=NULL;
    if(head==NULL){
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
    }
    else{
        q=head;
        for(q=head;q->next!=NULL;q=q->next);
        q->next=temp;
        temp->prev=q;
        temp->next=NULL;
    }
}
void insert_pos(){
    struct node *temp,*q;
    int pos,item;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("Enter the value to insert after: ");
    scanf("%d",&item);
    temp->info=item;
    if(pos==1){
        temp->next=head;
        temp->prev=NULL;
        head=temp;
    }
    else if(head!=NULL && pos!=1){
        q=head;
        for(int i=1;i<pos-1;i++){
            q=q->next;
            if(q==NULL);
                return;
        }
        temp->next=q->next;
        temp->prev=q;
        if(q->next!=NULL)
            q->next->prev=temp;
        q->next=temp;
    }

}
void insert_after_ele(){
    struct node*temp, *q;
    temp=(struct node *)malloc(sizeof(struct node));
    int item;
    int ele;
    printf("\nEnter the value to insert: ");
    scanf("%d",&item);
    printf("Enter the element to insert after: \n");
    scanf("%d",&ele);
    temp->info=item;
    temp->next=NULL;
    if(head==NULL){
        printf("Not posible");
    }
    else{
        q=head;
        for(q=head;q->info!=ele;q=q->next){
            if(q==NULL)
                return;
        }
        temp->next=q->next;
        temp->prev=q;
        if(q->next!=NULL)
            q->next->prev=temp;
        q->next=temp;
    }

}

//deletion

void del_beg(){
    struct node *q=head;
    if(head!=NULL){
        q->next->prev=NULL;
        head=q->next;//head->next
        free(q);
    }
}
void del_end(){
    struct node *q=head;
    if(head==NULL)
        printf("not possible");
    else if(head->next==NULL){
        head=NULL;
        free(q);
    }
    else{
        for(;q->next!=NULL;q=q->next);
        q->prev->next=NULL;
        free(q);
    }
}
void del_pos(){
    struct node *q=head;
    int pos;
    printf("\nEnter the position to delte from: ");
    scanf("%d",&pos);
    if(head==NULL)
        printf("not possible");
    else if(pos==1){
        if(head->next==NULL){
            head=NULL;
        }
        q->next->prev=NULL;
        free(q);
    }
    else{
        for(int i=1;i<pos;i++){
            q=q->next;
            if(q==NULL) return;
        }
        q->prev->next=q->next;
        if(q->next!=NULL){
            q->next->prev=q->next;
        }
        free(q);
    }
}

void reverse(){
    struct node *p1,*p2;
    p1=head;p2=head->next;
    //making 1st node the last
    p1->next=NULL;
    p1->prev=p2;
    //----------

    while(p2!=NULL){
        //individual node change
        p2->prev=p2->next;
        p2->next=p1;

        //incrementation
        p1=p2;
        p2=p2->prev;
    }
    head=p1;
}
int main(){
    int ans=1;
    while(ans){
        printf("\n1.Insert at beg");
        printf("\n2.Insert at end");
        printf("\n3.Insert at pos");
        printf("\n4.Insert after ele");
        printf("\n5.Delete from beg");
        printf("\n6.Delete from end");
        printf("\n7.Delete from pos");
        printf("\n8.Reverse");
        int choice;
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert_beg();
            display(head);
            break;
        case 2:
            insert_end();
            display(head);
            break;
        case 3:
            insert_pos();
            display(head);
            break;
        case 4:
            insert_after_ele();
            display(head);
            break;
        case 5:
            del_beg();
            display(head);
            break;
        case 6:
            del_end();
            display(head);
            break;
        case 7:
            del_pos();
            display(head);
            break;
        case 8:
            reverse();
            display(head);
            break;
        
        default:
            printf("INVALID");
            break;
        }
        printf("\nContinue?1 for y 0 for n: ");
        scanf("%d",&ans);
    }

}