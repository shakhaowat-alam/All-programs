/*take an array of integer data type of size 10.Get input from user
and store the values int the array  and finally print the sum of those
integer.*/
#include<stdio.h>
int main()
{
    int a[10],sum,i;
    printf("Enter the values or array");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   for(i=0;i<10;i++){
    sum=sum+a[i];

   }
     printf("The sum of array %d",sum);
        return 0;
}



