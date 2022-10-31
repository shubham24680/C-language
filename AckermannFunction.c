#include <stdio.h>

int ak(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ak(m - 1, 1);
    else
        return ak(m - 1, ak(m, n - 1));
}

void main()
{
    int m, n;
    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);
    printf("Ackermann Function Sum: %d", ak(m, n));
}