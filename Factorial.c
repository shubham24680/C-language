#include <stdio.h>

// Factorial of a number.
int fac(int n)
{
    if (n == 1)
        return 1;

    return n * fac(n - 1);
}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // int fact = 1;
    // for(int i=1; i<=n; i++)
    //     fact *= i;
    // printf("%d",fact);
    printf("Factorial of the given number is %d", fac(n));
}