#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=&a[3];
    printf("%d ",*(ptr));
    printf("%d ",*(ptr+1));
    printf("%d ",*(ptr-1));
}
