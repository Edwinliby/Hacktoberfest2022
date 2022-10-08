#include<stdio.h>
int main(){
   int a,b,c,n,l=5;
   while(l>4){
   printf("Choose Your Task:\n 1)Addition of Two Numbers\n2)To check whether the number is odd or even\n3)To print the first n natural numbers\n4)Multiplication of two numbers\n5)Exit\n");
   scanf("%d",&a);
   switch(a){
      case 1:printf("Enter Your numbers:\n");
             scanf("%d %d",&b,&c);
             printf("The Sum of b and c is %d\n",(b+c));
             break;
      case 2:printf("Enter Your number:\n");
             scanf("%d",&b);
             if(b%2==0){
               printf("%d is an even number\n",b);
             }
             else{
               printf("%d is an odd number\n",b);
             }
             break;
      case 3:printf("Enter your number:\n");
             scanf("%d",&b);
             for(n=1;n<=b;n++){
               printf("%d\n",n);
             }
             break;
      case 4:printf("Enter your numbers:\n");
             scanf("%d %d",&b,&c);
             printf("Your product is %d\n",(b*c));
             break;
       case 5:printf("Your Task Ends:\n");
              l=1;
              break;
   } 
   }
}
