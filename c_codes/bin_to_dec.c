#include<stdio.h>
int main()
{ 
    int n , d;
    int s=0 , k=1;
    printf("entr no");
    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        n=n/10;
        s=s+d*k;
        k=k*2;
    }
    printf("\ndecimal no=%d", s);

    return 0;
}
   
