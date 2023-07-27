#include<stdio.h>
#include <cmath>
int main()
{
    int head,feet;
    scanf("%d %d",&head,&feet);
    
    float x,y;
    // Number of Head
    // x + y = head;
    // Number of feet
    // 2*x + 4*y = feet;
    
    x = (double)(4*head-feet)/2;
    y = (double)(feet-2*head)/2;
    
    if (x == (int)x && y == (int)y && x > 0 && y > 0)  {
        printf("YES\n");
        printf("%.0f %.0f",x, y);
    } else {
        printf("NO\n");
    }

    return 0;
}