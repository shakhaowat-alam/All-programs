#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
          printf("%d\n",i);
      }                                //printf("%d\n",i);printf("\n");
        printf("\n");
    }
    return 0;
}
