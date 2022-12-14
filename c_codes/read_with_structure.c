#include<stdio.h>
struct student
{
    int rno;
    char name[10];
    char sub[10];
    int fees;

};
int main()
{
    struct student t;
    FILE *f;
    f=fopen("ab.txt","r");
    fscanf(f,"%d %s %s %d",&t.rno,&t.name,&t.sub,&t.fees);
    printf("%d %s %s %d",t.rno,t.name,t.sub,t.fees);
    fclose(f);
    return 0;

}