#include<stdio.h>
int main()
{
      int i, limit, total = 0, x, counter = 0, time_quantum;
      int WT = 0, tat = 0, AT[10], BT[10], temp[10];
      float average_WT, average_tat;
      printf("\nEnter Total Number of Processes: ");
      scanf("%d", &limit);
      x = limit;
      for(i = 0; i < limit; i++)
      {
         printf("Enter Details of Process[%d]\n", i + 1);
            printf("Arrival Time:");
            scanf("%d", &AT[i]);
            printf("Burst Time:");
            scanf("%d", &BT[i]);
            temp[i] = BT[i];   
      }
 
      printf("\nEnter Time Quantum:\t");
      scanf("%d", &time_quantum);
      printf("\nProcess\tBT\tTAT\tWT");
      for(total = 0, i = 0; x != 0;)
      {
            if(temp[i] <= time_quantum && temp[i] > 0)
            {
                  total = total + temp[i];
                  temp[i] = 0;
                  counter = 1;
            }
            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - time_quantum;
                  total = total + time_quantum;
            }
            if(temp[i] == 0 && counter == 1)
            {
                  x--;
                  printf("\nP[%d]\t%d\t%d\t%d", i + 1, BT[i], total - AT[i], total - AT[i] - BT[i]);
                  WT = WT + total - AT[i] - BT[i];
                  tat = tat + total - AT[i];
                  counter = 0;
            }
            if(i == limit - 1)
            {
                  i = 0;
            }
            else if(AT[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 
      average_WT = WT * 1.0 / limit;
      average_tat = tat * 1.0 / limit;
      printf("\nAverage Waiting Time:\t%f", average_WT);
      printf("\nAvg Turnaround Time:\t%f", average_tat);
      return 0;
}
