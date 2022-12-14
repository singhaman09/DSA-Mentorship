#include<stdio.h>
void main()
{
    int i, j, cv=1, n=0, n2;

    for (i=1; i<=4; ++i)
    {
        n2=0;

        for (j=cv; j<=10; ++j)
        {
            printf("%d ", j);

            ++n2;

            if (n2-n==1)
                break;
        }

        n=n2;
        cv=j+1;

        printf("\n");
    }
}