#include<stdio.h>

int main()

{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int flag =0;
	for(int i =2;i <=n/2;i++)
	{
	 	if (n%i ==0)
			flag =1;
			break;
	}
	if (flag == 0)
	printf("%d,number is prime",n);
	else
	printf("%d,number is not prime",n);
}
