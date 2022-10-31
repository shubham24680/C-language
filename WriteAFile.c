#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char s[100];
    fp = fopen("Text_file.txt", "a");

    if (fp == NULL)
    {
        printf("Error");
        return 1;
    }

    gets(s);
    fputs(s, fp);

    // for (int i = 0; i < strlen(s); i++)
    // {
    //     fputc(s[i], fp);
    // }

    fclose(fp);

    return 0;
}
