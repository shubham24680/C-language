#include <stdio.h>
#include <string.h>

void main()
{
    char c[100];
    printf("Write a program to test wheather a given identifier is valid or not.");
    printf("\n\nEnter a identifier: ");
    gets(c);

    if (c[0] >= '0' && c[0] <= '9')
    {
        printf("Invalid Identifier");
        return;
    }

    int i, j = 1;
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] == '_' || (c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= '0' && c[i] <= '9'))
            continue;
        else
        {
            j = 0;
            break;
        }
    }

    if (j == 1)
        printf("\nValid Identifier");
    else
        printf("\nInvalid Identifier");
    return;
}