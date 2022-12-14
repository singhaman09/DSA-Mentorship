#include<stdio.h>

void main()
{
    int i, j;

    for (i=1; i<=4; ++i)
    {
        for (j=3; j>=i; --j)
            printf("  ");

        
        for (j=i; j>=1; --j)
            printf("%c ", j+64);

        printf("\n");
    }
}