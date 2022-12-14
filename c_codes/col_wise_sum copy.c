#include<stdio.h>

int main()
{
    int i, j, X[3][3],s1=0,s2=0,s3=0,s4=0;
    
    printf("Enter 9 numbers in matrix:\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            printf("Enter: ");
            scanf("%d", &X[i][j]);
        }
    }
    
    printf("matrix is:\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            printf("%d\t",X[i][j]);
        } printf("\n");
    }
    
    printf("\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            if (j==0)
               s1=s1+X[i][j];
             else if(j==1)
               s2=s2+X[i][j];
            else if(j==2)  
               s3=s3+X[i][j];
         }
        printf("\n");
    }
    printf("sum is of first col :%d\n",s1);
    printf("sum is of second col :%d\n",s2);
    printf("sum is of third col :%d\n",s3);
    printf("sum is of fourth col :%d\n",s4);
    return 0;
}