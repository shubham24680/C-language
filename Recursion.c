#include <stdio.h>

// Direct Recursion.
// Tailed.
void fun(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        fun(n - 1);
    }
}

// Indirect Recursion.
void fun(int n);
void funback(int n);

void fun(int n)
{
    if(n <= 20)
    {
        printf("%d\t",n);
        n++;
        funback(n);
    }
}

void funback(int n)
{
    if(n <= 20)
    {
        printf("%d\t",n);
        n++;
        fun(n);
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}

