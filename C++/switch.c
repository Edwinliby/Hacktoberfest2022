#include<stdio.h>
int main()
{
    int marks,op;
    printf("\n Enter marks(1-100)");
    scanf("%d",&marks);
    switch(marks){
        case 100: printf("pass");
        break;
        case 90: printf("pass");
        break;
        case 80: printf("fail");
        break;
        case 70: printf("fail");
        break;
        default: printf("invalid number");
    }
    printf("Thank you");


    return 0;
}
