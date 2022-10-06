// Github username: ayushknath
// Aim: This program prints an Advanced Pyramid Pattern
// Date: 4/10/2022

#include <stdio.h>
int main()
{
    int n, i, j, k, l = 1, pos;

    printf("Enter n: ");
    scanf("%d", &n);

    pos = n;

    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= (n * 2); j++)
        {
            if (i > 1)
            {
                if (j >= pos && j <= pos + l)
                    printf("* ");
                else if (j >= 1 && j < pos)
                    printf("%d ", k++);
                else
                    printf("%d ", --k);
            }
            else
            {
                if (j > (n * 2) / 2)
                    printf("%d ", --k);
                else
                    printf("%d ", k++);
            }
        }
        if (i > 1)
        {
            pos--;
            l += 2;
        }

        printf("\n");
    }
    return 0;
}