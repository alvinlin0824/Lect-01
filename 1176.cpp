#include<stdio.h>
int main()
{
    int a,b;
    float pi = 3.141592653589793;
    scanf("%d",&a);
    scanf("%d",&b);
    double area =  (double)(b*b*pi - a*a*pi);
    printf("%.2f",area);
    return 0;
}