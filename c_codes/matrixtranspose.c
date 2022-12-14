#include<stdio.h>
int main()
{
    int A[2][2];
    int r,c;

    printf ("Enter 4 numbers in matrix A\n");
    for(r=0;r<2;++r) 
    {
    
     for(c=0;c<2;++c) 
    {
    printf ("Enter No:") ;
    scanf ("%d", &A[r][c]) ;
    }
    }
    
    printf("matrix A is\n");
    for(r=0;r<2;++r) 
    {
    
    for(c=0;c<2;++c) 
    {
    printf ("%d\t",A[r][c]);
    }
    printf("\n");
    } 
    
    printf ("transpose\n");
    for(r=0;r<2;++r) 
    {
    
    for(c=0;c<2;++c) 
    {
    printf ("%d\t",A[c][r]);
    }
    printf("\n");
    } 
    //second method of tranpose
    printf ("transpose\n");
    for(c=0;c<2;++c) 
    {
    
     for(r=0;r<2;++r) 
    {
    printf ("%d\t",A[r][c]);
    }
    printf ("\n");
    } 
   return 0;
}
