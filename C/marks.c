#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in five subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;
    if(per>=60)
    printf("First division\n");
    else
    {
        if(per>=50)
        printf("Second division\n");
    else{
        if(per>=40)
          printf("Third divison\n");
    else
        printf("Fail\n");
    }
    }
    return 0;
}