// sum of specific elements in 5x5 matrix whose sum of their indexs(row & col.) is even. 

#include<stdio.h>

int main()
{
    int i, j, X[5][5],s=0;
    
    printf("Enter 25 numbers in matrix:\n");
    
    for (i=0; i<5; ++i)
    {
        for (j=0; j<5; ++j)
        {
            printf("Enter: ");
            scanf("%d", &X[i][j]);
        }
    }
    
    printf("\n");
    printf("matrix is:\n");
    
    for (i=0; i<5; ++i)
    {
        for (j=0; j<5; ++j)
        {
            printf("%d\t", X[i][j]);
        }
        printf("\n");
    }
    
    for (i=0; i<5; ++i)
    {
        for (j=0; j<5; ++j)
        {
            if ((i+j)%2==0)
              s=s+X[i][j]; 
            else
                printf("\t");
        }
        printf("\n");
        }
   printf("sum is: %d\n",s);
   return 0;
}