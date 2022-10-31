#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=int(*)malloc(5 * sizeof(int));
    if(ptr==null){
        printf("Memory not allocated");
    }else{
        printf("Memory allocation successfull.\n");

    }
    return 0;
}
