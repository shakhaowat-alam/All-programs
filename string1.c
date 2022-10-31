/*Write a c program to print following output
.............................
Enter your name:
    Shakhaowatul Alam.  (this line will be given by users using keybord)
    Hello!Shakhaowatul Alam.  */
#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter your name:\n");
    gets(name);  //scanf("%s",name);

    printf("Hello! %s\n",name);
    return 0;
}
