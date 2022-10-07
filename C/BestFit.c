#include <stdio.h>

void main()
{
    int fragment[20], b[20], p[20], i, j, nb, np, temp, lowest = 9999;
    static int barray[20], parray[20];
    printf("\n\t\t\tMemory Management Scheme - Best Fit");
    printf("\nEnter the number of blocks:");
    scanf("%d", &nb);
    printf("Enter the number of processes:");
    scanf("%d", &np);
    printf("\nEnter the size of the blocks:-\n");
    for (i = 1; i <= nb; i++)
    {
        printf("Block no.%d:", i);
        scanf("%d", &b[i]);
    }
    printf("\nEnter the size of the processes :-\n");
    for (i = 1; i <= np; i++)
    {
        printf("Process no.%d:", i);
        scanf("%d", &p[i]);
    }
    
    for (i = 1; i <= np; i++)
    {
        for (j = 1; j <= nb; j++)
        {
            if (barray[j] != 1)
            {
                temp = b[j] - p[i];
                if (temp >= 0)
                    if (lowest > temp)
                    {
                        parray[i] = j;
                        lowest = temp;
                    }
            }
        }
        fragment[i] = lowest;
        barray[parray[i]] = 1;
        lowest = 10000;
    }
    printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
    for (i = 1; i <= np && parray[i] != 0; i++)
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, p[i], parray[i], b[parray[i]], fragment[i]);
}
