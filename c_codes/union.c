#include<stdio.h>
union start
{
    int a;
    float b;
    char c;

};
int main()
{
    union start A;
    A.a=2;
    printf("%d\n",A.a);
    A.b=4.6;
    printf("%f\n",A.b);
    A.c='p';
    printf("%c",A.c);
    return 0;
    
}
