#include<stdio.h>
int main()
{
    int a , b;
    int c;
    printf("enter nos:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swap , a = %d\n", a );
    printf("after swap , b = %d\n", b);


    return 0;
}
