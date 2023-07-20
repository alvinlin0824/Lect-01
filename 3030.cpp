#include<stdio.h>
#include <cmath>
int main()
{
    float a;
    scanf("%f",&a);
    if (a >= 0)
    {
        
        float after_score = (float)sqrt(a)*10;
        float increase_score = (float)after_score - a;
        printf("Original: %.2lf\n",a);
        printf("Adjusted: %.2f(+%.0f)",after_score,increase_score);
    } else {
        printf("Please Enter Non-Negative Integers");
    }
    
    
    return 0;
}