#include<stdio.h>
int main()
{
  int d1,d2,d3,d4,d5,n;
  long int sum;
  printf("enter a five digit nmber:");
  scanf("%d",&n);
  d1=n%10;
  n=n/10;
  d2=n%10;
  n=n/10;
  d3=n%10;
  n=n/10;
  d4=n%10;
  n=n/10;
  d5=n%10;
  sum=d1+d2+d3+d4+d5;
  printf("\n the sum of digit is:%ld",sum);
  return 0;
} 