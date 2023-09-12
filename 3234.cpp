// Please write a program that requires the user to input two integers A, B and a double-precision floating-point number C to perform the following calculations:

// ● sum of thousands digits of A, B and C, mean, standard deviation
// ● The sum of hundreds digits of A, B and C, mean, standard deviation
// ● sum of ten digits of A, B and C, mean, standard deviation
// ● Single-digit sum, mean, and standard deviation of A, B, and C
// ● Sum, mean, standard deviation of A, B, and C
// If there is no such digit, please treat it as 0

#include <iostream>
#include <string>
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


int main()
{
    int a,b;
    double c;
    
    cin >> a >> b >> c;
  
    int c = c % 10;

    cout << sum(a%10,b%10,c%10) << " " << mean(a%10,b%10,c%10) << " " << sd(a%10,b%10,c%10) << endl;
    cout << sum(a,b,c) << " " << mean(a,b,c) << " " << sd(a,b,c) << endl;

    return 0;
}

