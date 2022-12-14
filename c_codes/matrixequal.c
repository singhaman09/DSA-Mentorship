#include<stdio.h>
int main()
{
    int A[2][2],B[2][2], z=0;
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
    
    printf ("Enter 4 numbers in matrix B\n");
    for(r=0;r<2;++r) 
    {
    
     for(c=0;c<2;++c) 
    {
    printf ("Enter No:") ;
    scanf ("%d", &B[r][c]) ;
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
    
    printf("matrix B is\n");
    for(r=0;r<2;++r) 
    {
    
    for(c=0;c<2;++c) 
    {
    printf ("%d\t",B[r][c]);
    }
    printf("\n");
    }

    printf ("Check whether matrix are equal or not:\n");
   for(r=0;r<2;++r) 
    {
    
     for(c=0;c<2;++c) 
    {
       
     if(A[r][c]==B[r][c])
     z+=1;
      
    printf ("\n");
    } 
    
    }
if(z==4)
    printf("equal");
    
else
    printf("not equal");
    
    return 0;
}