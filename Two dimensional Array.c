#include<stdio.h>
int main()
{
    int x[2][3]={11,12,13,
                21,22,23};
        printf("%d\n",x[0][1]);

        int y = x[0][1]+x[1][2];
        printf("values of y is %d\n",y);
        return 0;
}
