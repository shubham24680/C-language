#include <stdio.h>
#include <math.h>

void spaces(int v)
{
    for (int i = 0; i < v; i++)
        printf(" ");
}

// int pascal(int n, int k)
// {
//     int r = 1;
//     if (k > (n - k))
//         k = (n - k);

//     for (int i = 0; i < k; i++)
//     {
//         r *= (n - i);
//         r /= (i + 1);
//     }

//     return r;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         spaces(n - (i + 1));
//         for (int j = 0; j <= i; j++)
//             printf("%d ", pascal(i, j));
//         printf("\n");
//     }

//     return 0;
// }

// C program for Pascal’s Triangle
// A O(n^2) time and O(1) extra space
// function for Pascal's Triangle
void printPascal(int n)
{
    for (int line = 1; line <= n; line++)
    {
        spaces(n - line);
        int C = 1; // used to represent C(line, i)
        for (int i = 1; i <= line; i++)
        {
            printf("%d ", C); // The first value in a line is always 1
            C = C * (line - i) / i;
        }
        printf("\n");
    }
}
// Driver code
int main()
{
    int n = 9;
    printPascal(n);
    return 0;
}
