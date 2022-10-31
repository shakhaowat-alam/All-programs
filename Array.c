#include<stdio.h>
int main()
{
    int a[3];
    a[0]=5;
    a[1]=6;
    a[2]=10;

    int x=a[0]+a[2];
    printf("The result is %d",x);

    a[2]=50;
    int y=a[0]+a[2];
    printf("The result is %d",y);
    return 0;
}
