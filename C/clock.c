#include <stdio.h>
#include <windows.h>
 
 int main()
      {
         int hours,minutes,seconds;
         int delay=1000; // we add a delay of 1000 milliseconds and we will use it in the function sleep
         printf("Set Time : \n");
         scanf("%d%d%d",&hours,&minutes,&seconds);
         if(hours>12 || minutes>60 || seconds>60)
         {
            printf("ERROR ! \n");
            exit(0);
         }
         while (1)//this is an infinite loop and anything inside will repeat itself to infinity

         {
           seconds++;
           if(seconds>59)
           {
            minutes++;
            seconds=0;

           }
           if(minutes>59){
            hours++;
            minutes=0;
           }
           if(hours>12){
            hours=1;
           }
           printf("\n Clock :");
           printf("\n %02d:%02d:%02d",hours,minutes,seconds);// this writes our time in this format 00:00:00
           Sleep(delay); //this function sleep down the while loop and make it more like real clock
           system("cls");//this clears the screen


         }
         
 }