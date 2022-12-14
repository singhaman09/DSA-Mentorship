#include<stdio.h>
#include <stdlib.h>
int main()
{
    int r,c,i,j,l,m,k;
    printf("enter row and column of first matrix");
    scanf("%d %d",&i,&j);
    printf("enter row and column of second matrix");
    scanf("%d %d",&l,&m);
    if(j!=l)
    {
        printf("matrix is not possible");
        exit(1);
    }
    int a[i][j], b[l][m];
    int AB[i][m];
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<l;r++)
    {
        for(c=0;c<m;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<l;r++)
    {
        for(c=0;c<m;c++)
        {
            printf("%d\t",b[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<i;r++)
    {
        for(c=0;c<m;c++)
        {
            AB[r][c]=0;

            for(k=0;k<m;k++)
            
                AB[r][c]+=a[r][k]*b[k][c];
            
            printf("%d\t",AB[r][c]);

        }
        printf("\n");
    }


return 0;

}
