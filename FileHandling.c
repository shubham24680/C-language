#include <stdio.h>
#define N 100

int main()
{
    FILE *file;
    file = fopen("Text_file.txt", "r+");

    printf("1. Writing\n");
    printf("2. Reading\n");
    printf("3. Writing Charaters\n");
    printf("4. Reading Charaters\n");
    printf("5. Writing a string\n");
    printf("6. Reading a string\n");
    printf("7. Fseek()\n");
    printf("8. Size of file\n");
    char choose, string[N];
    printf("Enter the number: ");
    scanf("%c", &choose);
    switch (choose)
    {
    case '1':
        printf("What is your name:");
        scanf(" %[^\n]", &string);
        fprintf(file, "My name is %s\n", string);
        break;
    case '2':
        while (fscanf(file, "%s", string) != EOF)
            printf("%s", string);
        break;
    case '3':
        fputc('a', file);
        break;
    case '4':
        printf("%c", fgetc(file));
        break;
    case '5':
        printf("What is your name:");
        scanf(" %[^\n]", &string);
        fputs(string, file);
        break;
    case '6':
        printf("%s", fgets(string, N - 1, file));
        break;
    case '7':
        fputs("This is VS Code", file);
        fseek(file, 7, SEEK_SET);
        fputs("MINE", file);
        break;
    case '8':
        fseek(file,0,SEEK_END);
        printf("%d", ftell(file));
        break;
    default:
        printf("ERROR");
        break;
    }
    fclose(file);
}