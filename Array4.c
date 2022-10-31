#include<stdio.h>
int main()
{
    int a[5],i,b[5],ab[5];
    printf("Enter the value of A\n");
    for(i=0;i<5;i++){
        scanf("%f",&a[5]);
    }
    printf("Enter the value of B\n");
    for(i=0;i<5;i++){
    scanf("%f",&b[5]);
    }
   for(i=0;i<5;i++){
    ab[i]=a[i]+b[i];
   }
   printf("Enter the value of ab array");
   for(i=0;i<5;i++){
    printf("%d",ab);

   }
}
