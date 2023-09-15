// On the plane coordinates X and Y, the positions of the three points A, B, and C are (a, b), (c, d), and (e, f) respectively.
// And the straight lines of these three points can form a triangle
// Please use Heron's formula to calculate the area of ​​the triangle
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

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
    
    return 0;
}

