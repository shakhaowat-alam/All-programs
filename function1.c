/* write a function that takes an integer as input and print Even if the
number is divisable by 2,otherwise print odd.call the function from
the main function.*/
#include<stdio.h>
 void even_odd(int x){
 if(x%2==0){
    printf("Even");
 }else{
    printf("odd");
 }
 }

int main(){
even_odd(10);
 return 0;
}

