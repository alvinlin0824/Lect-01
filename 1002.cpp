#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    float c = a + b;
    printf("%.2f + %.2f = %.2f",a,b,c);
    return 0;
}