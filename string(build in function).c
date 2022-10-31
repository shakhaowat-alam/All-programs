//Determine the length of your string(by using build in function).
/*#include<stdio.h>
int main()
{
    char b[]="Bangladesh";
    int l=strlen(b);
    printf("The length of your string is :%d",l);
    return 0;
}*/

//strcpy:
/*#include<stdio.h>
int main()
{
    char a[]="Bangladesh";
    char b[]="Chottogram";

    strcpy(a,b);
    printf("The value of a is %s\n",a);
    printf("The value of b is %s\n",b);
    return 0;
}*/
//strcmp:string compare
/*#include<stdio.h>
int main()
{
    char a[]="Bangladesh";
    char b[]="Chottogram";
    int x=strcmp(a,b);
    if(x==0){
        printf("a and b are equall");
    }else{
       printf("a and b are not equall");
    }
    return 0;
}*/
//strcat
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="Bangladesh";
    char b[20]="Chottogram";
    strcat(a,b);
    printf("The value of a is %s\n",a);
    printf("The value of b is %s\n",b);
    return 0;
}


