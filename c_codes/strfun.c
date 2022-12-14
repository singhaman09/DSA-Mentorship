#include<stdio.h>
#include<string.h>
int main()
{   
    char name[20],c[20];
    printf("enter name");
    gets(name);

    printf("cat=%s",strcat(name,"a"));
    printf("name is=%s",name);
    printf("\nlength of str  is=%d",strlen(name));
    printf("\nin uppercase is=%s",strupr(name));
    printf("\nlower case  is=%s",strlwr(name));
    strcpy(c,name);
    printf("\nin copy text=%s",c);
   
    return 0;
}