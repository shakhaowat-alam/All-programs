/*write a function that simply print a message "Hello! I am from inside
the function".call this function from the main function.*/

#include<stdio.h>
void print_message(){
printf("Hello! I am from inside the function");

}

int main()
{
   print_message();
   return 0;
}
// Another way:

void print_message();
int main()
{
   print_message();
   return 0;
}

#include<stdio.h>
void print_message(){
printf("Hello! I am from inside the function");

}


