// Matrix Multiplication

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter no of rows and columns of first matrix : \n");
	scanf("%d%d",&a,&b);
	printf("enter no of rows and columns of second matrix : \n");
	scanf("%d%d",&c,&d);
	
	if(b==c)
	{
	int x[a][b];
	printf("enter the elements in the first matrix: \n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
			
		}
		
    }
    
	int y[c][d];
	printf("enter the elements in the second matrix: \n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&y[i][j]);
			
		}
		
	}
	
	int r[a][d]; // Result matrix
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<c;j++)
		{
			r[i][j]=0;
			for(int k=0;k<b;k++)
			{
				r[i][j]+=x[i][k]*y[k][j];
			}
			
		}
	}
	printf("The first matrix is this: \n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d \t",x[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is this: \n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d \t",y[i][j]);
		}
		printf("\n");
	}
	printf("The multiplication of the two array is: \n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d \t",r[i][j]);
		}
		printf("\n");
    }
}
else
printf("Input the correct order");

	return 0;
}////





