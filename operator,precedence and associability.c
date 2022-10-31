#include<stdio.h>
int main()
{
    int x=10;
    printf("The value of x is %d\n",x++);  //10-11
    printf("The value of x is %d\n",++x);  //11-12

    x=10;
    printf("The value of x is %d\n",++x);  //11-11
    printf("The value of x is %d\n",x++);  //11-12

    return 0;
}
