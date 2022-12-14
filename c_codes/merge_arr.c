#include<stdio.h>
int main()
{
    int a[4]={1,3,5,7};
    int b[4]={2,4,6,8};
    int c[4];
    int i=0,j=0,k=0;
    for(i=0;i<4;i++){
        if(a[i]>b[j]){
            c[k]=b[j];
            j=j+1;
            k=k+1;
        }   
        else{
            c[k]=a[i];
            i=i+1;
            k=k+1;
        }
    }
    for(i=0;i<4;i++){
        printf("%d",c[i]);
    }
}