#include <stdio.h>

// fibonacci number.
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n, i;
    printf("Enter the length:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        printf("%d\t", fib(i));
}