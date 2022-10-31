#include <stdio.h>

// Array rotation.
void shift(int a[], int n, int d);
void juggling(int a[], int n, int d);
void reversal(int a[], int n, int d);
int gcd(int n, int d);
void reverse(int array[], int start, int end);
void print(int array[], int n);

int main()
{
	system("cls");
	int n, d;
	printf("Enter the Length and shift value: ");
	scanf("%d %d", &n, &d);

	int a[n];
	printf("Enter the element of the Array.\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("\nMethods:\n");
	printf("1. Simple shift Algorithm.\n");
	printf("2. Juggling Algorithm.\n");
	printf("3. Reversal Algorithm.\n");
	printf("Choose a number: ");
	char choose;
	scanf("%c", &choose);

	switch (choose)
	{
	case '1':
		shift(a, n, d);
		break;
	case '2':
		juggling(a, n, d);
		break;
	case '3':
		reversal(a, n, d);
		break;
	}

	print(a, n);
}

// Method 1 - Simple shift.
// Time Complexity - O(n).
// Space Complexity - O(d).
void shift(int a[], int n, int d)
{
	system("cls");
	printf("Simple Shift Method.\n");
	int i, temp[d];
	for (i = 0; i < d; i++)
		temp[i] = a[i];

	for (i = 0; i < n - d; i++)
		a[i] = a[i + d];

	for (i = n - d; i < n; i++)
		a[i] = temp[i - (n - d)];
}

// Method 2 - A juggling algorithm. It is only valid when gcd of n and d is equal to d.
// Time Complexity - O(n).
// Space Complexity - O(1).
void juggling(int a[], int n, int d)
{
	system("cls");
	printf("Juggling Algorithm Method.\n");
	int i, j, spaces = gcd(n, d);
	for (i = 0; i < spaces; i++)
	{
		int temp = a[i];
		for (j = i + spaces; j < n; j += spaces)
			a[j - spaces] = a[j];

		a[n - spaces + i] = temp;
	}
}

int gcd(int n, int d)
{
	if (d == 0)
		return n;

	if (n > d)
		return gcd(d, n % d);
	else
		return gcd(n, d % n);
}

// Method 3 - Reversal algorithm.
// Time Complexity - O(n).
void reversal(int a[], int n, int d)
{
	system("cls");
	printf("Reversal Algorithm Method.\n");
	reverse(a, 0, d);
	reverse(a, d, n);
	reverse(a, 0, n);
}

void reverse(int array[], int start, int end)
{
	int i;
	for (i = start; i < start + (end - start) / 2; i++)
	{
		int change = array[i];
		array[i] = array[end + start - i - 1];
		array[end + start - i - 1] = change;
	}
}

void print(int array[], int n)
{
	printf("Array after Rotation:\n");
	for (int i = 0; i < n; i++)
		printf("%d\t", array[i]);
	printf("\n");
}