#include<stdio.h>
int main()
{
    int age;
    printf("Enter a value of age\n",age);
    scanf("%d",&age);
    if(age<2){
        printf("He is now living as a Infant");
    }if(age>=2&&age<10){
       printf("He is now living as a child");
    }if(age>=10&&age<20){
       printf("He is now living as a Teenage");
    }if(age>=20&&age<=30){
       printf("He is now living as a Adult");
    }if(age>30){
       printf("He is now living as a Old");
    }
       return 0;

}
