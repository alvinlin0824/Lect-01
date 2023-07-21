#include<stdio.h>
#include <cmath>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int remainder;
    int remainder = n % 7;
      
    char cn = (char)n;
    
    if (isdigit(cn,"7")) {
        printf("YES\n");
    }
    // if (remainder == 0) {
    //     printf("YES\n");
    // }

    // if (x == (int)x & y == (int)y) {
    //     printf("YES\n");
    //     printf("%.0f %.0f",x, y);
    // } else {
    //     printf("NO\n");
    // }

    return 0;
}