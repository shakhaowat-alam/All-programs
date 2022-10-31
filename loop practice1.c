#include<stdio.h>  //write a loop which will print summation of all
int main()           //number divided by 3&5 between 30-120
{
   int i,sum=0;
   for(i=30;i<=120;i++){
       if(i%3==0 && i%5==0){
        sum=sum+i;
        printf("%d\n",sum);
       }
       return 0;

   }
