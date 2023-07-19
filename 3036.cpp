#include<stdio.h>
int main()
{
    char name[128], gender[128];
    int age;
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&gender);
    printf("Name:%s\n",name);
    printf("Age:%d\n",age);
    printf("Gender:%s",gender);
    return 0;
}