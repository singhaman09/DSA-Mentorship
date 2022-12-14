#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three nos;\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c)
    printf("\n%d is the smallest", a); 
    else if(b<c)
    printf("\n%d is the smallest nos",b);
    else
    printf("\n%d is the smallest no",c);


    if(a>b && a>c)
     printf("\n%d is the largest", a); 
    if(b>c)
    printf("\n%d is the largest nos",b);
    else
    printf("\n%d is the largest no",c);
    
    return 0;


}
