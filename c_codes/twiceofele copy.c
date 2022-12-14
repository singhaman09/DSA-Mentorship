//wap to store 16 element in matrix[4][4] and do twice of every element.

#include<stdio.h>
int main()
{
    int i , j , x[4][4];

    printf("enter 8 nos");
    for(i=0;i<4;++i)
    {
        for (j=0;j<4;++j)
        {
            printf("entr no");
            scanf("%d",&x[i][j]);

        }
    }
    printf("matrix are \n");
    for(i=0;i<4;++i)
    {
        for (j=0;j<4;++j)
        {
            printf("%d\t",x[i][j]);

        }
        printf("\n");
    }
    return 0;


}