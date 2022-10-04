#include <stdio.h>

void main()
{
    int array1[100][100], array2[100][100], mult[100][100], i, j, r1, c1, r2, c2;
    printf("Enter the no. of rows of matrix 'A' : \n");
    scanf("%d", &r1);
    printf("Enter the no. of columns of matrix 'A' : \n");
    scanf("%d", &c1);

    printf("Enter the no. of rows of matrix 'B' : \n");
    scanf("%d", &r2);
    printf("Enter the no. of columns of matrix 'B' : \n");
    scanf("%d", &c2);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the elements of the matrix 'A' : \n");
            scanf("%d", &array1[i][j]);
        }
    }

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the elements of the matrix 'B' : \n");
            scanf("%d", &array2[i][j]);
        }
    }
    printf("The entered matrix A is :\n");
    for(i=0;i < r1;i++)
    {
        for ( j = 0; j < c1; j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }

    printf("The entered matrix B is :\n");
    for(i=0;i < r2;i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    if (c1==r2)
    {
        for ( i = 0; i < r2; i++)
        {
            for ( j = 0; j < c1; j++)
            {
                mult[i][j] = (array1[i][j]*array2[j][i]);
            }
            
        }
        printf("The mult is :\n");
        for(i=0;i < r2;i++)
        {
            for ( j = 0; j < c1; j++)
            {
                printf("%d\t",mult[i][j]);
            }
            printf("\n");
        }
        
    }
    else
        printf("Multiplication of the given matrices is not possible ");
    

    // printf("The multiplication of the entered matrix is :\n");
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d\t", sum[i][j]);
    //     }
    //     printf("\n");
    // }
}