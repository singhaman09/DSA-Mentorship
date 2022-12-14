#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rno;
    char name[15];
    float percentage;
};

void addrec()
{   struct student t;
    FILE *f;
    f=fopen("record.txt","a");
    printf("enter details:\n");
    scanf("%d %s %f",&t.rno,&t.name,&t.percentage);
    fprintf(f,"\n%d %s %f",t.rno,t.name,t.percentage);
    fclose(f);

}

void showrec()
{  
        struct student t;
        FILE *f;
        f=fopen("record.txt","r");
        printf("details are:\n");
        while(fscanf(f,"%d %s %f",&t.rno,&t.name,&t.percentage)!=EOF)
        {
            printf("\nrno=%d \nname=%s \npercentage=%f",t.rno,t.name,t.percentage);
            
        }
        
        fclose(f);
}

void count()
{       struct student t;
        FILE *f;
        int c=0;
        f=fopen("record.txt","r");
        printf("details are:\n");
        while(fscanf(f,"%d %s %f",&t.rno,&t.name,&t.percentage)!=EOF)
        {
            c+=1;
                        
        }
        printf("%d",c);

}

int main()
{   while (1)
  { 
    int choice;
    printf("\n1-add record 2- show record 3- exit 4-count");
    printf("\nenter choice:");
    scanf("%d",&choice);

    if (choice==1)
    {   
        addrec();
    }
    
    else if(choice==2)
    {   
        showrec();

    }

    else if(choice==3)
    {
        exit(1);
    }

    else if(choice==4)
    {  count();
    
    }       
    else
    {
        printf("wrong choice");
        continue;
    }
  }

return 0;

}