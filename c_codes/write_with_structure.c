#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    char sub[20];
    int fees;

};
int main()
{
    struct student t;
    FILE *f;
    f=fopen("ab.txt","w");
    printf("enter rno: \nenter name: \nenter sub: \nenter fees:\n");
    scanf("%d %s %s %d",&t.rno,&t.name,&t.sub,&t.fees);

    fprintf(f,"%d %s %s %d",t.rno,t.name,t.sub,t.fees);
    fclose(f);
    return 0;

}   