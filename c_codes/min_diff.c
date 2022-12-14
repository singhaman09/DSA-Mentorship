#include<stdio.h>
int main()
{
    int a[4]={0,2,4,6};
    int min_diff=a[1]-a[0];
    int i,diff;
    for(i=0;i<3;i++)
{
    diff=a[i+1]-a[i];
    if(diff<min_diff){
        min_diff=diff;
    }
}
printf("%d",min_diff);
        


}