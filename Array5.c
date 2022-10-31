/*Take an array of integer data type of size 5.scan the values from the
user.Now print the output like the following one.
values of array:10 25 20 15 30
sum of odd values:40
sum of even values:60 */
#include<stdio.h>
int main()
{
    int a[5],i,Even_sum=0,odd_sum=0;

    for(i=0;i<5;i++){
       scanf("%d",&a[i]);
    }
    printf("values of arrays: ");
    for(i=0;i<5;i++){
        printf("%d",a[i]);

        if(a[i]%2==0)
            Even_sum=Even_sum+a[i];
        else
           odd_sum=odd_sum+a[i];

    }
    printf("sum of Even numbers %d\n",Even_sum);
    printf("sum of odd numbers %d\n",odd_sum);
    return 0;

}
