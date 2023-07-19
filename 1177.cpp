#include<stdio.h>
int main()
{
    char name[20];
    scanf("%s",&name);
    printf("姓名\t座號\t分數\n");
    printf("王小明\t20\t40\n");
    printf("%s\t21\t100\n", name);
    return 0;
}