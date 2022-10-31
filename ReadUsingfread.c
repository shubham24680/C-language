#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int bookid;
    char booktitle[20];
    float price;

} BOOK;

int main(int argc, char const *argv[])
{
    FILE *fp = malloc(sizeof(BOOK));
    BOOK book;
    fp = fopen("File.txt", "rb");

    if (fp == NULL)
    {
        printf("Invalid charaters");
        return 0;
    }

    while (fread(&book, sizeof(book), 1, fp) > 0)
    {
        printf("%d\n%s\n%0.2f\n", book.bookid, book.booktitle, book.price);
    }

    fclose(fp);

    return 0;
}
