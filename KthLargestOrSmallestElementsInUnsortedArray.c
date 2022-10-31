#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the length of the Array: ");
    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);
    printf("Enter the elements of the Array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (a + i));

    int k;
    printf("Enter the required position of the element: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(a + j) > *(a + (j + 1)))
            {
                int change = *(a + j);
                *(a + j) = *(a + (j + 1));
                *(a + (j + 1)) = change;
            }
        }

    for(int i=0; i<n; i++)
        printf("%d",*(a+i));
    printf("\n");
    printf("The Kth smallest element of the Array is %d\n", *(a + (k - 1)));
    printf("The Kth largest element of the Array is %d", *(a + (n - k)));
    return 0;
}