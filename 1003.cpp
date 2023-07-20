#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    int sum = a + b + c;
    printf("sum is %d\n",sum);
    
    double average = (double)sum/3;
    printf("average is %.2f\n",average);
    
    int product = a*b*c;
    printf("product is %d\n",product);
    
    int minimum;
    if (a > b & b > c | b > a & a > c) {
        minimum = c;
    } else if (a > c & c > b | c > a & a > b)
    {
        minimum = b;
    } else {
        minimum = a;
    }
    printf("smallest is %d\n",minimum);

    int maximum;
    if (a > b & b > c | a > c & c > b) {
        maximum = a;
    } else if (b > a & a > c | b > c & c > a)
    {
        maximum = b;
    } else {
        maximum = c;
    }
    printf("largest is %d\n",maximum);
    return 0;
}