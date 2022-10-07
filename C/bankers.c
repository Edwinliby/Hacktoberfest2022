#include <stdio.h>
void main()
{
	int n, r, i, j, k;
	int alloc[10][10], max[10][10];
	printf("Enter the no of process:");
	scanf("%d", &n);

	printf("Enter the no of resources:");
	scanf("%d", &r);

	printf("Enter the allocation memory:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < r; j++)
		{
			scanf("%d", &alloc[i][j]);
		}
	}

	printf("Enter the max memory:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < r; j++)
		{
			scanf("%d", &max[i][j]);
		}
	}

	int avail[r];
	printf("Enter the avaliable memory:\n");
	for (i = 0; i < r; i++)
	{
		scanf("%d", &avail[i]);
	}

	int f[n], ans[n], ind = 0;
	for (k = 0; k < n; k++)
	{
		f[k] = 0;
	}
	int need[n][r];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < r; j++)
			need[i][j] = max[i][j] - alloc[i][j];
	}

	int y = 0;
	for (k = 0; k < 5; k++)
	{
		for (i = 0; i < n; i++)
		{
			if (f[i] == 0)
			{
				int flag = 0;
				for (j = 0; j < r; j++)
				{
					if (need[i][j] > avail[j])
					{
						flag = 1;
						break;
					}
				}

				if (flag == 0)
				{
					ans[ind++] = i;
					for (y = 0; y < r; y++)
						avail[y] += alloc[i][y];
					f[i] = 1;
				}
			}
		}
	}

	int flag = 1;
	for (i = 0; i < n; i++)
	{
		if (f[i] == 0)
		{
			flag = 0;
			printf("The following system is not safe");
			break;
		}
	}

	if (flag == 1)
	{
		printf("Following is the SAFE Sequence\n");
		for (i = 0; i < n - 1; i++)
			printf(" P%d ->", ans[i]);
		printf(" P%d", ans[n - 1]);
	}
}
