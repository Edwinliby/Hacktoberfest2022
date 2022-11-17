#include <stdio.h>
#include <stdlib.h>

long long int **mult(long long int **p, long long int **q) {
    long long int **ans;
    ans = (long long int **) malloc(2 * sizeof(long long int *));
    for (int i = 0; i < 2; i++) {
        ans[i] = (long long int *) malloc(2 * sizeof(long long int));
        for (int j = 0; j < 2; j++) {
            *(*(ans+i)+j) = (p[i][0])*(q[0][j]) % 2021 + (p[i][1])*(q[1][j]) % 2021;
        }
    }
    return ans;
}

long long int **mpow(long long int **mat, long long int n) {
    if (n == 0) {
        long long int **iden;
        iden = (long long int **) malloc(2 * sizeof(long long int *));
        iden[0] = (long long int *) malloc(2 * sizeof(long long int));
        iden[1] = (long long int *) malloc(2 * sizeof(long long int));
        **iden = 1;
        *(*(iden)+1) = 0;
        *(*(iden+1)) = 0;
        *(*(iden+1)+1) = 1;
        return iden;
    }
    else {
        long long int **temp;
        temp = mpow(mat, n/2);
        temp = mult(temp, temp);
        if (n % 2 == 1) {
            temp = mult(temp, mat);
        }
        return temp;
    }
}

int cleverFib(long long int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        long long int **a;
        a = (long long int **) malloc(2 * sizeof(long long int *));
        a[0] = (long long int *) malloc(2 * sizeof(long long int));
        a[1] = (long long int *) malloc(2 * sizeof(long long int));
        a[0][0] = 1;
        a[0][1] = 1;
        a[1][0] = 1;
        a[1][1] = 0;
        long long int **ab;
        ab = mpow(a, n-1);
        int b[2][2];
        b[0][0] = (**ab) % 2021;
        b[0][1] = (*(*ab)+1) % 2021;
        b[1][0] = (**(ab+1)) % 2021;
        b[1][1] = (*(*(ab+1)+1)) % 2021;
        int c[2][1];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 1; j++) {
                c[i][j] = 1*b[i][0] + 0*b[i][1];
            }
        }
        return c[0][0];
    }
}

int main()
{
    long long int n;
    printf("Enter the integer n: ");
    scanf("%lld", &n);
    printf("%d", cleverFib(n));
    return 0;
}
