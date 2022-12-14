#include<stdio.h>

int main()
{
    int i, j, X[3][3];
    
    printf("Enter 9 numbers in matrix:\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            printf("Enter: ");
            scanf("%d", &X[i][j]);
        }
    }
    
    printf("\n");

     printf("matrix is:\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            printf("%d\t",X[i][j]);
        }
        printf("\n");
    }
    printf(" left diagonal is:\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            if (i==j)
            
                printf("%d\t", X[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    
    printf(" right diagonal is:\n");
    
     for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            if (i+j==2)
            
                printf("%d\t", X[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    
    printf(" diagonal elements  is:\n");
        
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            if ((i==j) || (i+j==2))
            
                printf("%d\t", X[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    
    printf("non diagonals elemets are:\n");
    
    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            if ((i==j) || i+j==2)
            
                printf("\t");
            else
                printf("%d\t", X[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}