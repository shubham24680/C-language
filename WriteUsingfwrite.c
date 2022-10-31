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
    FILE *fp;
    BOOK book;
    fp = fopen("File.txt", "wb");

    printf("Enter Book id, Title and Price\n");
    scanf("%d", &book.bookid);
    scanf(" %[^\n]", &book.booktitle);
    fflush(stdin);
    scanf("%f", &book.price);
    fwrite(&book, sizeof(book), 1, fp);

    fclose(fp);

    return 0;
}
