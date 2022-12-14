#include<stdio.h>
int main()
{
    int i , j , N,Q, a[N][Q];
    printf("enter number of row");
    scanf("%d",&N);
    Q=N;

    printf("enter elements");
    for(i=0;i<N;++i)
    {
        for (j=0;j<N;++j)
        {
            printf("entr no");
            scanf("%d",&a[i][j]);

        }
    }
    printf("matrix are \n");
    for(i=0;i<N;++i)
    {
        for (j=0;j<N;++j)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    for(i=0;i<N;i++)
    {
        for(j=N-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;


}