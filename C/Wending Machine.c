/*
Author: Siddhant Pandya
Program: Wending Machine
Difficulty: Medium
*/
	#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void wait(int seconds);
    void welcome_screen();
    void bill(float billmoney);
    int penceentered();
    int menu();
    int differentcoins();
    void drinktotal(int selection,int amount);
    void  drinkchosen(int selection);
    float cost(int selection);
 
 int main()
{
    welcome_screen();
    getch();
    int q;
    int entered;
    int amount;
    int cancel;
    int select;
    int selection;
    int pence;
    int billreq;
    int change;
    float drinkmax;
    float billmoney;
    float itemprice;
    float coinselected;
    float total;
 
    selection = menu();
    drinkchosen(selection);
   
    if(selection >0 && selection <5)
     {
         printf("\n\nPress 1 to continue or 2 to cancel the order\n");
         scanf("%d",&cancel);
  
         if(cancel==1)
         {
          printf("How  much?(Max 5)\n");
          scanf("%d",&amount);
          if(amount<=5)
          {  itemprice = cost(selection);
             drinkmax=amount*itemprice;
             bill(drinkmax);
             x:pence=penceentered();
 
 
       if(pence==5 || pence==10 || pence==20 || pence==50 || pence==100)
                        {
                            while(total<=drinkmax)
                           {
                            total=total+pence;
                            billreq = drinkmax-total;
  
                            if(total<drinkmax )
                            {
                             printf("\n\nYour outstanding money is %d p", billreq);
                             printf("\n\n");
                             goto x;
                            }
 
 
                             else if(total>drinkmax)
                            {
                             change=total-drinkmax;
                             drinktotal(selection,amount);
 
 
                                for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tDrink #%d is being dispensed\n",q);
                                 wait(5);
                                }
                             printf("\n\t\t\tYour change is %d p\n\n",change);
                             printf("\n\t\t    ***Thank you and have a nice day!!***");
                             break;
                            }
                            else
                            {
                            drinktotal(selection,amount);
                             for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tDrink #%d is being dispensed\n",q);
                                 wait(5);
                                }
                            printf("\n\t\t    ***Thank you and have a nice day!!***");
                             break;
                            }
                           }
                        }
                        else
                        {
                            printf("\nMoney not acceptable!Please Try again!\n\n");
                            goto x;
                        }
                        getch();
 
 
 
 
 
 
          }
 
 
        else{
                printf("Maximum quantity is 5. Please try again\n");
                main();
            }
      }
      else
 
 
        {
            printf("Your order has been cancelled\n\n");
            main();
        }
     }
   else
   {
       printf("Your order has been cancelled\n\n");
       main();
   }
 
 
}
 
 
   void welcome_screen()
   {
        printf("\t\t\tWelcome to our Vending Machine!\n\n");
        printf("\t\t\tCopyright Sids Canteen 2021 \n\n");
        printf("\t\t\tPress any key to continue.\n\n\n\n");
       return;
   }
 
 
   void bill(float billmoney)
   {
       printf("Total amount to be payed is: %2f\n\n\n",billmoney);
       return;
   }
 
 
 
 
int penceentered()
   {
        int pence;
        printf("Enter your money: \n");
        printf("(5p 10p 20p 50p 100p)\n");
        scanf("%d",&pence);
 
 
       return pence;
   }
 
 
    int menu()
    {
  int selection;
 
 
    printf("---------------------- \n");
 
 
    printf("MENU: ");
    printf("\n\n");
    printf("1. Apple Juice");            printf("\t\t\tp.1.00\n");
    printf("2. Orange Juice");               printf("\t\t\tp.1.30\n");
    printf("3. Mango Juice");                printf("\t\t\tp.1.20\n");
    printf("4. Pineapple Juice");           printf("\t\tp.1.50\n");
    printf("5. Quit");
    printf("\n\n");
 
 
    printf("Please enter your selection: ");
    scanf("%d",&selection);
 
 
    return selection;
 
 
    }
 
 
 
    void drinkchosen(int selection)
{
switch(selection)
{
    case 1:
printf("You have selected Apple Juice.");            printf("\t\t\tp.1.00\n");
      break;
   case 2:
printf("You have selected Orange Juice.");               printf("\t\t\tp.1.30\n");
      break;
   case 3:
printf("You have selected Mango Juice.");                printf("\t\t\tp.1.20\n");
      break;
   case 4:
printf("You have selected Pineapple Juice");           printf("\t\t\tp.1.50\n");
      break;
   case 5:
      break;
   default:
      printf("Invalid input!\n");
      break;
}
return;
}
 
 
 
 
 float cost(int selection)
 {
  float price = 0;
 
 
  switch(selection)
  {
     case 1:
       price = 1.00;
       break;
     case 2:
       price = 1.30;
       break;
     case 3:
       price = 1.20;
       break;
    case 4:
       price = 1.50;
       break;
   }
  
   return price;
 }
 
 
void wait(int seconds)
{
    clock_t end_wait=(clock() + (seconds * CLOCKS_PER_SEC));
    while(clock()<end_wait)
    {}
}
 
 
void drinktotal(int selection,int amount)
    {
      switch(selection)
      {
      case 1:
         printf("\n\n\t\t\tYou have selected %d Apple Juice\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 2:
         printf("\n\n\t\t\tYou have chosen %d Orange Juice\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 3:
         printf("\n\n\t\t\tYou have chosen %d Mango\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 4:
         printf("\n\n\t\t\tYou have chosen %d Pineapple Juice\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      default:
         printf("Invalid input!\n");
         break;
      }
 }

