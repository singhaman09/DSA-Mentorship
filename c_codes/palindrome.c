#include<stdio.h>
int main(){
   int num, rem, rev, temp;
   printf("Palindrome numbers between 10 to 10000 are:\n");
   for(num=100;num<=10000;num++){
      temp=num;
      rev=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
      }
      if(num==rev)
         printf("%d ",num);
   }
   return 0;
}