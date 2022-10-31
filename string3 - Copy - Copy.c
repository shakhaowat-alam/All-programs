/*Write a c program which will take a word as input from the user and
print the length of the string without using any built in function.*/
#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter the name :\n");
    scanf("%s",name);
    int i=0,counter=0;
    while(name[i] !='\0'){
        counter++;
        i++;
    }
    printf("The length of the string is %d:\n",counter);
    return 0;
}
