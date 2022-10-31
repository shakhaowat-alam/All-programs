//How to print two file.
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("text_file","a");
    int i;
    for(i=65;i<90;i++){
        fputc(i,fp );

    }
    char arr[100]=" Hi!I am shakhaowatul Alam";
    fputs(arr,fp);

    fprintf(fp, "My id is:%d\n", 1010);
    fclose(fp);
    return 0;
}

