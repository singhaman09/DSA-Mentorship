#include<stdio.h>
int main()
{
    int a=30;
    int *b=&a;
    printf("A=%d *B=%d",a,*b);
    *b=*b*10; //changes made in (a)
    printf("\nA=%d *B=%d",a,*b);
    ++*b;
    printf("\nA=%d *B=%d",a,*b);
    (*b)++; // when ++ is next to pointer braces is used.
    printf("\nA=%d *B=%d",a,*b);
    a=a-250;
    printf("\nA=%d *B=%d",a,*b);
    *b++; //wrong for addditon.
    printf("\nA=%d *B=%d",a,*b);
    return 0;
}