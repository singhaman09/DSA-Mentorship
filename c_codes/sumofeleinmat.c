//wap to store 16 element in matrix[4][4] and find sum of all element.
#include<stdio.h>
int main()
{
    int i , j , x[4][4], z=0;

    printf("enter 16 nos");
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


   
    for(i=0;i<4;++i) 
    {
    
     for(j=0;j<4;++j) 
     {
         z = z + x[i][j];
     printf ("%d\t",z) ;
     }
     printf ("\n") ;
     }
    
    return 0;


}