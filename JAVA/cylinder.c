#include<stdio.h>
int main()
{
    int r,h;
    float v,TSA;
    printf("\n Enter radius and height of any cylinder:");
    scanf("%d%d",&r,&h);
    v=3.14*r*r*h;
    TSA=2*3.14*r*h;
    printf("\n volume=%f,Total Surface Area=%f",v,TSA);
    return 0;
}