#include <stdio.h>
#include "QuickSort.c"
// using quicksort and binary search.
// Time Complexity: O(nlogn + mlogn).

int binarysearch(int a[], int begin, int end, int x)
{
    if (begin <= end)
    {
        int mid = begin + (end - begin) / 2;
        if ((mid == 0 || x > a[mid - 1]) && x == a[mid])
            return mid;

        if (x < a[mid])
            return binarysearch(a, begin, mid - 1, x);
        else
            return binarysearch(a, mid + 1, end, x);
    }

    return -1;
}

int change(int arr[], int a[], int n, int m)
{
    int temp[n], visited[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
        visited[i] = 0;
    }

    quicksort(temp, 0, n - 1);

    int ind = 0, f;
    for (int i = 0; i < m; i++)
    {
        f = binarysearch(temp, 0, n - 1, a[i]);
        if (f != -1)
        {
            for (int j = f; j < n && temp[j] == a[i]; j++)
            {
                arr[ind++] = temp[j];
                visited[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
            arr[ind++] = temp[i];
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
    int arr[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int a[] = {2, 1, 8, 3};
    change(arr, a, 11, 4);
    print(arr,11);
    return 0;
}
