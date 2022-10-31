/*suppose you are planning to make a simple calculator.Your calculator
has four function-add(),subtract(),multiply(),divided().Each of this
function takes two floating point numbers as input and returns the
result after applying the corresponding operation.scan different values
from the user and test these four functions with these input.*/
#include<stdio.h>
float_add(float a,float b){
    return a+b;
}
subtract_add(float a,float b){
    return a-b;
}
multiply_add(float a,float b){
    return a*b;
}
divide_add(float a,float b){
    return a/b;
}

int main()
{
   float a,b;
   printf("Enter the value of a and b \n");
   scanf("%f%f",&a,&b);
   float add_result=add(a,b);
   float subtract_result=subtract(a,b);
   float multiply_result=multiply(a,b);
   float divide_result=divide(a,b);
   printf("add: %f,subtract: %f,multiply: %f,divide :%f",add_result,subtract_result,multiply_result,divide_result);
   return 0;
}
