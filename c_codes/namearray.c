#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[20];
    printf("enter name");
    gets(name);

    printf("name is=%s",name);
    printf("\n");
    for(i=0;i<strlen(name);++i)
    printf("\nhello%c ",name[i]);
    return 0;
}