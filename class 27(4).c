#include<stdio.h>
int sum(int *a,int size){
int i,sum=0;
for(i=0;i<size;i++){
    sum=sum+*(a+i);
}
  return sum;
}


int main()
{
    int arr[3]={5,10,15};
    int result=sum(arr,3);
    printf("sum of array is %d",result);
}
