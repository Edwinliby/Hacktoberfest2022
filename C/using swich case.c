#include <stdio.h>
int main()
{
    int x;
    printf("Input number: ");
    scanf("%d",&x);
switch(x){
    case 1:
        printf(" This is  One \n",x);
    break;
    case 2:
        printf(" This is  Two \n",x);
    break;
    case 3:
        printf(" This is  Three \n",x);
    break;
    case 4:
        printf(" This is  Four \n",x);
    break;
    case 5:
        printf(" This is  Five \n",x);
    break;
    case 6:
        printf(" This is  Six \n",x);
    break;
    case 7:
        printf(" This is  Seven \n",x);
    break;
    case 8:
        printf(" This is  Eight \n",x);
    break;
    case 9:
    printf(" This is  Nine \n",x);
    break;
    case 10:
    printf(" This is  Nine \n",x);
    break;
     default:
        printf("This is not a number between 1-10\n");
    break;
    }
 return 0;}
