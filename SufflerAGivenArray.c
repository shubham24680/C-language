#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap(int *e1, int *e2)
{
    int temp;
    temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}

void randomize(int a[], int n)
{
    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        swap(&a[i], &a[j]);
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[10] = {6, 2, 8, 1, 7, 3, 9, 10, 5, 7};
    randomize(arr, 10);
    print(arr, 10);
    return 0;
}
