#include <stdio.h>
#include <conio.h>

void main()
{
    char text[30];
    int i, j = 0;

    printf("Write a C program to Identify whether a given line is a comment or not.");
    printf("\nEnter text: ");
    gets(text);
    for (i = 0; i < strlen(text) - 1; i++)
    {
        if (text[i] == '/' && text[i + 1] == '/')
        {
            printf("\nIt is a Comment.");
            return;
        }
        else
            printf(text[i]);
    }
    // if (text[0] == '/' && text[1] == '/')
    // {
    //     printf("\nIt is a Comment.");
    //     return;
    // }
    // else if (text[0] == '/' && text[1] == '*')
    //     for (i = 2; i <= 30; i++)
    //         if (text[i] == '*' && text[i + 1] == '/')
    //             hlo // ki
    //             {
    //                 printf("\nIt is a Comment.");
    //                 return;
    //             }

    printf("\nIt is not a Comment.");
    return;
}