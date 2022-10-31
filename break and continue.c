#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<4;i++){
        printf("Hello and wellcome back!\n");
        printf("Line no:1 I am MD.Shakhaowat Alam\n");
        if(i==3)           //if i==3 the next line doesnot work.
            continue;
        printf("Line no:2 I am from Hathazari\n");

    }
}
