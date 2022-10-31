#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    for(i=0;i<3;i++){
        for(i=0;i<3;i++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(i=0;i<3;i++){
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n ");
    }
    float average;
    average=sum/9.0;
    printf("The average is %f \n",average);
    return 0;
}
