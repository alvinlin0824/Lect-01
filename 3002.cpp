#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&h);
    double area =  (double)(a+b)*h/2;
    printf("%.1f",area);
    return 0;
}