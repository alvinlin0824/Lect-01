// Please write a program that requires the user to input two integers A, B and a double-precision floating-point number C to perform the following calculations:

// ● sum of thousands digits of A, B and C, mean, standard deviation
// ● The sum of hundreds digits of A, B and C, mean, standard deviation
// ● sum of ten digits of A, B and C, mean, standard deviation
// ● Single-digit sum, mean, and standard deviation of A, B, and C
// ● Sum, mean, standard deviation of A, B, and C
// If there is no such digit, please treat it as 0

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
    int a,b;
    double c;
    
    cin >> a >> b >> c;
    
    cout << setprecision(2) << sum(get_digit(a,4),get_digit(b,4),get_digit(c,4)) << " " << fixed << setprecision(2) << mean(get_digit(a,4),get_digit(b,4),get_digit(c,4)) << " " << sd(get_digit(a,4),get_digit(b,4),get_digit(c,4)) << endl;
    cout << setprecision(0) << sum(get_digit(a,3),get_digit(b,3),get_digit(c,3)) << " " << fixed << setprecision(2) << mean(get_digit(a,3),get_digit(b,3),get_digit(c,3)) << " " << sd(get_digit(a,3),get_digit(b,3),get_digit(c,3)) << endl;
    cout << setprecision(0) << sum(get_digit(a,2),get_digit(b,2),get_digit(c,2)) << " " << fixed << setprecision(2) << mean(get_digit(a,2),get_digit(b,2),get_digit(c,2)) << " " << sd(get_digit(a,2),get_digit(b,2),get_digit(c,2)) << endl;
    cout << setprecision(0) << sum(get_digit(a,1),get_digit(b,1),get_digit(c,1)) << " " << fixed << setprecision(2) << mean(get_digit(a,1),get_digit(b,1),get_digit(c,1)) << " " << sd(get_digit(a,1),get_digit(b,1),get_digit(c,1)) << endl;
    cout << fixed << setprecision(2) << sum(a,b,c) << " " << mean(a,b,c) << " " << sd(a,b,c) << endl;

    return 0;
}

