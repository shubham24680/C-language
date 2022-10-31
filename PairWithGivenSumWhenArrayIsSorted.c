#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 10 ^ 5

int main()
{
	int n;
	printf("Enter the length of the Array: ");
	scanf("%d", &n);

	int *a = malloc(sizeof(int) * n);
	printf("Enter the element of the Array: ");
	for (int i = 0; i < n; i++)
		scanf("%d", (a + i));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				int change = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = change;
			}
		}

	int num, near = N, diff, element;
	printf("Enter the number: ");
	scanf("%d", &num);
	int l = 0, r = n - 1;
	while (l < r)
	{
		diff = (*(a + l) + *(a + r));
		if (num > diff)
		{
			if ((num - diff) < near)
			{
				near = (num - diff);
				element = diff;
			}
			l++;
		}
		else
		{
			if ((diff - num) < near)
			{
				near = (diff - num);
				element = diff;
			}
			r--;
		}
	}

	printf("Required number : %d", element);
}
