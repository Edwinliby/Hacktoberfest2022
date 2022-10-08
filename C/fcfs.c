#include <stdio.h>

int p[30],bt[30],tot_tat=0,wt[30],n,tot_wt=0,tat[30],fcfs_wt=0,fcfs_tat=0;
float awt,avg_tat,avg_wt;
int wt_tat(int *a,int *b);
int main()
{
    int i;
    printf("\nEnter the number of processes : \n");
    scanf("%d",&n);
    printf("Enter burst time for each process :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        p[i]=i;
    }
    printf("\nFCFS algorithm\n");
    wt_tat(&fcfs_tat,&fcfs_wt);
    printf("\n\nTotal turn around time = %d",fcfs_tat);
    printf("\n\nAverage turn around time = %d",fcfs_tat/n);
    printf("\n\nTotal Waiting time = %d",fcfs_wt);
    printf("\n\nAverage Waiting time = %d",fcfs_wt/n);
}
int wt_tat(int *a,int *b)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i==0)
        tat[i]=bt[i];
        else
        tat[i]=tat[i-1]+bt[i];
        tot_tat=tot_tat+tat[i];
    }
    *a=tot_tat;
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tot_wt=tot_wt+wt[i];
    }
    *b=tot_wt;
    printf("\nProcess\t\tBurst Time\tTurnaround time\tWaiting time");
    for(i=0;i<n;i++)
    printf("\nprocess(%d)\t\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
    return 0;
}
