/*write a function that takes an integer as input and print all of its
divisors.call the function from the main function.*/

#include<stdio.h>
void print_divisors(int x){
int i;
 for(i=1;i<=x;i++){
    if(x%i==0){
        printf("%d\n",i);
    }
}
}
int main()
{
 print_divisors(50);
 return 0;
}
