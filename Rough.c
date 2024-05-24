#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// typedef char x[10];

void main()
{
   char a[5] = "Knot", *p,  i, *p1;
   p = &a[1];
   p1 = p + 3;
   *p1 = 101;
   for(i = 0; i < 3; i++)
    printf("%d", *p++);


    return;
}