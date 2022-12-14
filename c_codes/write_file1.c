#include<stdio.h>
int main()
{
    FILE *f;
    char c[100];
    f=fopen("story.txt","w");
    printf("enter\n");
    gets(c);
    fprintf(f,"%s",c);
    fclose(f);
    return 0;
}