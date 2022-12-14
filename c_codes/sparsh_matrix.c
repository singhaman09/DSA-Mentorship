#include<stdio.h>
int main()
{
    int i , j , row,col, x[100][100],t=0,c=0;
    printf("enter number of row:");
    scanf("%d",&i);
    printf("enter number of col:");
    scanf("%d",&j);
    t=(i*j)/2;
    A:
    printf("enter elements:\n");
    for(row=0;row<i;++row)
    {
        for (col=0;col<j;++col)
        {
            scanf("%d",&x[row][col]);
        }
    }
    for(row=0;row<i;++row)
    {
        for (col=0;col<j;++col)
        {
            if(x[row][col]!=0 && x[row][col]!=1)
            {
                printf("You entered incorrect element/s.\n");
                printf("matrix has elements either 0 or 1.\n");
                printf("please enter again.\n");
                goto A;
            }
        }
    }
    printf("matrix are: \n");
    for(row=0;row<i;++row)
    {
        for (col=0;col<j;++col)
        {
            printf("%d\t",x[row][col]);

        }
        printf("\n");
    }
    for(row=0;row<i;++row)
    {
        for (col=0;col<j;++col)
        {
            if(x[row][col]==0)
            {
                c=c+1;
            }
        }
    }

    if(c>t)
    {
        printf("given matrix is a sparsh matrix");
    }
    else
    {
        printf("given matrix is not a sparsh matrix");
    }
    return 0;


}
