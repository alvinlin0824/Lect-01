#include<stdio.h>
#include <cmath>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    scanf("%f %f\n",&x1,&y1);
    scanf("%f %f\n",&x2,&y2);
    scanf("%f %f",&x3,&y3);
    
    float d1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    float d2 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    float d3 = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    float s =  (d1+d2+d3)/2;
    float area = sqrt(s*(s-d1)*(s-d2)*(s-d3));

    printf("%.2f ",area);

    return 0;
}