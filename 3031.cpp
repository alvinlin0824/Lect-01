#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a % 12 == 0)
    {
        int dozen = a/12;
        printf("%d dozen",dozen);
    } else {
        int dozen = a/12;
        int remainder = a%12;
        printf("%d dozen and %d",dozen,remainder);
    }
    return 0;
}