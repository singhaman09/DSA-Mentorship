#include<stdio.h>
int main()
{   int i,j,p,q;
    scanf("%d %d %d %d",&i,&j,&p,&q);
    if(i!=q){
    printf("matrix multiplication is not possible");
    }
    int A[i][j], B[p][q], AB[i][q];
    int r,c,k;

    printf ("Enter numbers in matrix A\n");
    for(r=0;r<i;++r) 
    {
    
     for(c=0;c<j;++c) 
    {
    scanf ("%d", &A[r][c]) ;
    }
    }
    printf ("Enter  numbers in matrix B\n");
    for(r=0;r<p;++r) 
    {
    
     for(c=0;c<q;++c) 
    {
    scanf ("%d", &B[r][c]) ;
    }
    }

    printf ("product of 2 matrix are:\n");
    for(r=0;r<j;++r) 
    {
    
     for(c=0;c<p;++c) 
    {
        AB[r][c]=0;
    for( k=0;k<j;++k)
    AB[r][c]+=A[r][k]*B[k][c];
    printf ("%d\t",AB[r][c]) ;
    }
    printf ("\n") ;
    }
    
    return 0;
}