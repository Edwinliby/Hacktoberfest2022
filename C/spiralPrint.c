#include <stdio.h>
#include <string.h>
struct record
{
	char Name[15];
	char City[20];
};

void spiralPrint(int m, int n, int a[][3])
{
	int i, k = 0, t = 0;

	while (k <= m / 2 && t <= n / 2)
	{
		for (i = t; i < n; ++i)
			printf("%d", a[k][i]);
		k++;
		for (i = k; i < m; ++i)
			printf("%d", a[i][n]);
		n--;

		if (k < m)
		{
			for (i = n; i >= t; --i)
				printf("%d ", a[m - 1][i]);
			m--;
		}

		if (t < n)
		{
			for (i = m - 1; i >= k; --i)
				printf("%d ", a[i][t]);
			t++;
		}

	}
}
int main()
{

	int a[3][3] = {{1,2,3},
				  {4,5,6},
				  {7,8,9}};

	spiralPrint(3, 3, a);
}