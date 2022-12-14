#include<stdio.h>
#include <stdlib.h>
int main()
{   int a,b;
    FILE *f;
    f=fopen("aman.txt","w");
    printf("enter 2 nos\n");
    scanf("%d %d",&a,&b);
    fprintf(f,"%d %d",a,b);
    fclose(f);
    return 0;
}