#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],c[20];
    printf("ent name");
    gets(name);

    printf("hello %s",name);
    printf("\n length =%d",strlen(name));
    strcpy(c,name);
    printf("in copy text= %s",c);
    printf("\n upper =%s",strupr(name));



    return 0;

}