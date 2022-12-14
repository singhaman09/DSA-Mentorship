#include<stdio.h>
int main()
{
    int a , b;
    printf("enter nos:");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b; 
    a = a - b ;
    printf("after swap , a = %d\n", a );
    printf("after swap , b = %d\n", b);


    return 0;
}
