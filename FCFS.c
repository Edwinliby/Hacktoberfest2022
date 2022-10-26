#include<stdio.h>
#include<string.h>
void main()
{
    int track[30],n,i,head,sum = 0,new ;
    printf("Enter the number of tracks :\n");
    scanf("%d",&n);
    printf("Enter the head pointer :\n");
    scanf("%d",&head);
    printf("Enter the tracks to be traversed :\n");
    for(i=0;i<n;i++)
    {
        new = 0;
        scanf("%d",&track[i]);
        new = head - track[i];
        if(new<0)
        {
            new = track[i] - head;
        }
        head = track[i];
        sum = sum + new;

    }
    printf("The traversed order ");
    for(i=0;i<n;i++)
    {
        printf(" %d=>",track[i]);
    }
    printf("\b\b\b \nTotal head movements :%d",sum);

}