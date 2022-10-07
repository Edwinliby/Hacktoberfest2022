
#include <stdio.h>

int main()
{
  int t,i;
  printf("How many numbers you have? ");
   scanf("%d",&t);
       int a[t];
       int c[10];
      
          for(i=0;i<t;i++) {
               printf("Enter number %d :",i+1);
          scanf("%d",&a[i]);
              c[i]=0;
                 
              do {
                   c[i]=c[i]+(a[i]%10);
                      a[i]=a[i]/10;
                    
              }while(a[i]/10 !=0);
                 c[i]=c[i]+a[i];
                 printf("Sum of digits in Number %d is %d\n",i+1,c[i]);
          }
            
    return 0;
}

