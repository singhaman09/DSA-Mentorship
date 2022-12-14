#include<stdio.h>
int main()
{
    int A[3][4] ;
    int r,c;

    printf ("Enter 9 numbers in matrix A\n");
    for(r=0;r<3;++r) 
    {
    
     for(c=0;c<4;++c) 
    {
    printf ("Enter No:") ;
    scanf ("%d", &A[r][c]) ;
    }
    }
    
    
    
    
     printf("matrix A is\n");
    for(r=0;r<3;++r) 
    {
    
    for(c=0;c<4;++c) 
    {
    printf ("%d\t",A[r][c]);
    }
    printf("\n");
    } 
    
    
    printf("diagonals are\n");
    for(r=0;r<3;++r) 
    {
    
    for(c=0;c<4;++c) 
    { if((r==c)||(r+c==2))
       printf ("%d\t",A[r][c]);
      else
       printf("\t");
    }
    printf("\n");
    } 
    return 0;
   }