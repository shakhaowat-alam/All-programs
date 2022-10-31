#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(5 * sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated.\n");
    }else{
    printf("Memory allocation is successfull.\n");
    }
    return 0;
}
