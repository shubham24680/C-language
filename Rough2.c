#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <math.h>
#include <conio.h>
#define N 4

void print(int (*a)[]);
void movement(int (*a)[]);
void swap(int (*a)[], int h1, int v1, int h2, int v2);

int h = N - 1, v = N - 1;
void main()
{
    int a[N][N], i, j;
    for(int i=0; i<N; i++)
        for(j=0; j<N; j++)
        {
            if(i == N - 1 && j == N - 1)
                break;
            back:;
            a[i][j] = rand()%16;
            if(a[i][j] == 0) 
                goto back;
            srand(a[i][j]);
        }

    (*a+3)[3] = 0;
    print(a);
}

void print(int (*a)[])
{
    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
            printf("%d\t",(*a + i)[j]);
        printf("\n");
    }

    movement(a);
}

void movement(int (*a)[])
{
    char controller;
    controller = getch();
    switch (controller)
    {
    case 119:
        swap(a,h,v,--h,v);
        break;
    case 97:
        swap(a,h,v,h,--v);
        break;
    case 115:
        swap(a,h,v,++h,v);
        break;
    case 100:
        swap(a,h,v,h,++v);
        break;
    default:
        break;
    }
    print(a);
}

void swap(int (*a)[], int h1, int v1, int h2, int v2)
{
    int change = (*a+h1)[v1];
    (*a+h1)[v1] = (*a+h2)[v2];
    (*a+h2)[v2] = change;
}