#include<stdio.h>
void main()
{
	int alloc[20][20],max[20][20];
	int n,r,i,j,k;
	printf("enter the number of process\n");
	scanf("%d",&n);
	printf("enter the no of resources \n");
	scanf("%d",&r);
	printf("enter the allocation memory\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&alloc[i][j]);
		}
	}
	printf("ente rthe max memory\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}
	int avail[r];
	printf("enter the available memory\n");
	for(i=0;i<r;i++);
	{
		scanf("%d",&avail[i]);
	}
	int f[r],ans[n],ind = 0;
	int work[r];
	
	
	int need[n][r];
	for(i=0;i<n;i++)
	{
		for(j=0;j<r;j++)
		{
			need[i][j] = max[i][j] - alloc[i][j];
         
		}
	}
	printf("need matrix\n");

	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<r;j++)

		{
			printf("%d",need[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		work[i] = avail[i];
	}
	for(k=0;k<n;k++)
	{
		f[k] = 0;
	}
	int y = 0;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(f[i]==0)
			{
				int flag = 0;
			
			for(j=0;j<r;j++)
			{
				if(need[i][j]>work[j])
				{

			    	flag=1;
			    	break;
				}
			}
			if(flag == 0)
			{
				ans[ind++] = 1;
				for(y=0;y<r;y++)
				{
					work[y]+=alloc[i][y];
					
				}
				f[i]=1;
			}
			}
		}
	}
	int flag = 1;
	for(i=0;i,n;i++)
	{
		if(f[i]==0)
		{
			flag = 0;
			printf("the following sysetm is not safe\n");
			break;
		}
    }
	if(flag ==1)
	{
		printf("system is safe\n");
		printf("followinf si the saf esequ:\n");
		for(i=0;i<n-1;i++)
		{
			printf("p%d->",ans[i]);
			printf("p%d",ans[n-1]);
		}
	}
	}
	


