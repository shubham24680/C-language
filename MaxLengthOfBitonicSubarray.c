#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mlb(int arr[], int n)
{
	if (n == 0)
		return 0;

	int length = 1, s = 0, e = 0, j = 0;
	while (j < (n - 1))
	{
		while (j < (n - 1) && arr[j] <= arr[j + 1])
			j++;

		while (j < (n - 1) && arr[j] >= arr[j + 1])
			if (j < (n - 1) && arr[j] > arr[j + 1])
				e = ++j;

		length = (length > (j - s + 1)) ? length : (j - s + 1);
		s = e;
	}

	return length;
}

int main()
{

	int arr[] = {12, 4, 78, 90, 45, 23};
	int i;

	printf("%d", mlb(arr, 6));

	return 0;
}
