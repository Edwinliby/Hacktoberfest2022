#include <stdio.h>
void main() {
  int num1,num2,opt;
  printf("Enter the first Integer :");
  scanf("%d",&num1);
  printf("Enter the second Integer :");
  scanf("%d",&num2);
  
    printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
    scanf("%d",&opt);
    switch(opt) {
      case 1:
        printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
        break;
        
      case 2:
        printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);
        break;
        
      case 3:
        printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
        break;  
      
      case 4:
        if(num2==0) {
          printf("The second integer is zero. Devide by zero.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);
        }  
        break;
        
      case 5: 
        break; 
        
      default:
        printf("Input correct option\n");
        break; 
    }
}
