#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (999 < a & a < 10000)
    {
        int sum = a/1000 + (a/100 - (a/1000)*10) + (a/10 - (a/100)*10) + (a/1 - (a/10)*10);
        printf("%d",sum);
    } else {
        printf("Out-of-Range");
    }
    return 0;
}