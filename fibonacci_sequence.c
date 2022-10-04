#include <stdio.h>
int main() {
    int a, b, c, n, i;
    a = 0, b = 1;
    c = a + b;
    printf("Enter the no. of terms");
    scanf("%d", &n);
    printf("The fibonacci sequence is %d %d ", a, b);
    for(i = 3; i <= n; i++)
    {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
