#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {6, 2, 8, 1, 7, 3, 9, 10, 5, 7};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum -= (2 * arr[i]);
        sum += (2 * arr[9 - i]);
    }

    printf("%d", sum);
    return 0;
}
