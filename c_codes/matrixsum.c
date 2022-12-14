//wap to store 8numbers in the matrix
//x[2][4] and print them
#include<stdio.h>
int main()
{
    int I, J, x[2][4], y[2][4], z[2][4];

    printf ("Enter 8 numbers in matrix X\n");
    for(I=0;I<2;++I) 
    {
    
     for(J=0;J<4;++J) 
    {
    printf ("Enter No:") ;
    scanf ("%d", &x[I][J]) ;
    }
    }
    printf ("Enter 8 numbers in matrix Y\n");
    for(I=0;I<2;++I) 
    {
    
     for(J=0;J<4;++J) 
    {
    printf ("Enter No:") ;
    scanf ("%d", &y[I][J]) ;
    }
    }
    
    printf ("Matrix X are:\n");
    for(I=0;I<2;++I) 
    {
    
     for(J=0;J<4;++J) 
    {
    printf ("%d\t",x[I][J]) ;
    }
    printf ("\n") ;
    }
    

    printf ("Matrix Y are:\n");
    for(I=0;I<2;++I) 
    {
    
     for(J=0;J<4;++J) 
    {
    printf ("%d\t",y[I][J]) ;
    }
    printf ("\n") ;
    }
    
    printf ("Matrix Z(X+Y) are:\n");
    for(I=0;I<2;++I) 
    {
    
     for(J=0;J<4;++J) 
    {
    z[I][J]=x[I][J]+y[I][J];
    printf ("%d\t",z[I][J]) ;
    }
    printf ("\n") ;
    }
    
    return 0;
}