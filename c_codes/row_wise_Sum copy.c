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
            if (i==0)
               s1=s1+X[i][j];
            else if(i==1)
               s2=s2+X[i][j];
            else if(i==2)  
               s3=s3+X[i][j];
         }
        printf("\n");
    }
    printf("sum is of first row:%d\n",s1);
    printf("sum is of second row:%d\n",s2);
    printf("sum is of third row:%d\n",s3);
    printf("sum is of fourth row:%d\n",s4);
    return 0;
}