// On the plane coordinates X and Y, the positions of the three points A, B, and C are (a, b), (c, d), and (e, f) respectively.
// And the straight lines of these three points can form a triangle
// Please use Heron's formula to calculate the area of ​​the triangle
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

double sum(int A, int B, double C){
       return A + B + C;
} 

double mean(int A, int B, double C){
       return double(A + B + C)/3;
} 

double sd(int A, int B, double C){
       return sqrt(((pow(A,2) + pow(B,2) + pow(C,2)) - 3*pow((A+B+C)/3,2))/3);
} 

int get_digit(double num, int N){
    int rem;       
    for (int i = 1; i <= N; i++)
    {      
        rem = int(num) % 10;
        num = num / 10;
    }
    return rem;
}


int main()
{
    double x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    float d1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    float d2 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    float d3 = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    float s =  (d1+d2+d3)/2;
    float area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
    
    cout << fixed << setprecision(2) << area << endl;
    // cout << setprecision(2) << sum(get_digit(a,4),get_digit(b,4),get_digit(c,4)) << " " << fixed << setprecision(2) << mean(get_digit(a,4),get_digit(b,4),get_digit(c,4)) << " " << sd(get_digit(a,4),get_digit(b,4),get_digit(c,4)) << endl;
    // cout << setprecision(0) << sum(get_digit(a,3),get_digit(b,3),get_digit(c,3)) << " " << fixed << setprecision(2) << mean(get_digit(a,3),get_digit(b,3),get_digit(c,3)) << " " << sd(get_digit(a,3),get_digit(b,3),get_digit(c,3)) << endl;
    // cout << setprecision(0) << sum(get_digit(a,2),get_digit(b,2),get_digit(c,2)) << " " << fixed << setprecision(2) << mean(get_digit(a,2),get_digit(b,2),get_digit(c,2)) << " " << sd(get_digit(a,2),get_digit(b,2),get_digit(c,2)) << endl;
    // cout << setprecision(0) << sum(get_digit(a,1),get_digit(b,1),get_digit(c,1)) << " " << fixed << setprecision(2) << mean(get_digit(a,1),get_digit(b,1),get_digit(c,1)) << " " << sd(get_digit(a,1),get_digit(b,1),get_digit(c,1)) << endl;
    // cout << fixed << setprecision(2) << sum(a,b,c) << " " << mean(a,b,c) << " " << sd(a,b,c) << endl;

    return 0;
}

// #include<stdio.h>
// #include <cmath>
// int main()
// {
//     float x1,y1,x2,y2,x3,y3;
//     scanf("%f %f\n",&x1,&y1);
//     scanf("%f %f\n",&x2,&y2);
//     scanf("%f %f",&x3,&y3);
    
//     float d1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
//     float d2 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
//     float d3 = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
//     float s =  (d1+d2+d3)/2;
//     float area = sqrt(s*(s-d1)*(s-d2)*(s-d3));

//     printf("%.2f ",area);

//     return 0;
// }