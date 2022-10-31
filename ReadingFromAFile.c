#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch, str[100];
    fp = fopen("warehouse.txt", "r");

    if (fp == NULL)
    {
        printf("Error");
        return 1;
    }

    // Reading a file Using of fgets() are the other.
    while (fgets(str, 99, fp) != 0)
    {
        printf("%s", str);
    }

    // ch = fgetc(fp);
    // while (!feof(fp))
    // {
    //     printf("%c", ch);
    //     ch = fgetc(fp);
    // }

    fclose(fp);

    return 0;
}