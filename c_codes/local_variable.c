#include<stdio.h>
int main()
{
    int a=3;
    {
        int b=5;
        printf("A=%d B=%d",a,b);
    }
    printf("\nA=%d",a);
    return 0;
}