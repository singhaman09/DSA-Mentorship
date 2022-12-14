#include<stdio.h>
int main()
{
    int a,b;
    FILE *f;
    f=fopen("aman.txt","r");
    fscanf(f,"%d %d",&a,&b);
    printf("%d %d",a,b);
    fclose(f);
    return 0;
}