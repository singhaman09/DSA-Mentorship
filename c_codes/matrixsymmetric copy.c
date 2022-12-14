#include<stdio.h>
int main()
{
    int A[3][3] ,z=0;
    int r,c;

    printf ("Enter 9 numbers in matrix A\n");
    for(r=0;r<3;++r) 
    {
    
     for(c=0;c<3;++c) 
    {
    printf ("Enter No:") ;
    scanf ("%d", &A[r][c]) ;
    }
    }
    
    printf("matrix A is\n");
    for(r=0;r<3;++r) 
    {
    
    for(c=0;c<3;++c) 
    {
    printf ("%d\t",A[r][c]);
    }
    printf("\n");
    } 
    
    printf("tranpose\n");
    
    for(c=0;c<3;++c) 
    {
    
     for(r=0;r<3;++r) 
    {
    printf ("%d\t",A[r][c]);
    }
    printf ("\n");
    } 
    
    printf ("Check whether matrix are equal or not:\n");
   for(r=0;r<3;++r) 
    {
    
     for(c=0;c<3;++c) 
    {
       
    if(A[r][c]==A[c][r])
    z+=1;
    } 
}
if(z==9)
    printf("matrix is symmetric");
    
else
    printf("matrix is not symmetric");
    return 0;
}