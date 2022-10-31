#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("text_file","w");
    int i;
    for(i=65;i<90;i++){
        fputc(i,fp);

    }
    fclose(fp);
    return 0;
}
