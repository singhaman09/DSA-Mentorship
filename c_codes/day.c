#include<stdio.h>
int main()
{
    int d;
    printf("enter day no 1-7");
    scanf("%d", &d);
    if (d==1)
        printf("monday");
    else if(d==2)
        printf("tuesday");
    else if(d==3)
        printf("wednesday");
    else if(d==4)
        printf("thrusday");
    else if(d==5)
        printf("friday");
    else if(d==6)
        printf("saturday");
    else if(d==7)
        printf ("sunday");

        return 0;

}