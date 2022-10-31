#include <stdio.h>

int index_replace(int a[], int n)
{
    int count = 0, max;
    int prev_zero = -1, prev_prev_zero = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if ((i - prev_prev_zero) > count)
            {
                count = (i - prev_prev_zero);
                max = prev_zero;
            }
            prev_prev_zero = prev_zero;
            prev_zero = i;
        }
    }

    if ((n - prev_prev_zero) > count)
        max = prev_zero;

    return max;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    int index = index_replace(a, 16);
    printf("%d\n",index);
    return 0;
}
