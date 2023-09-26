// Master chef Xiao Dangjia recently invented a new way to cook dishes.
// That cooking method is called intermittent heating. 
// And he plans to use this cooking method to compete in the most advanced cooking contest.
// The intermittent heating method is simple, he heats his dish for one minute 
// and then cools it for another minute. Just do it again and again.
// (You can also cool it first and then heat it!)
// It is known that heating for one minute increases the temperature of the dish by X degrees Celsius, 
// while cooling for one minute decreases the temperature of the dish by Y degrees Celsius.
// Note that the special thing about his method is that it must be cooled for one minute after heating 
// for one minute, so it cannot be heated continuously.
// There is a time limit for cooking, so the little master only has N minutes at most to prepare his dishes.
// According to Xiao Dangjia's knowledge, the hotter the dish, the better. 
// So, what is the maximum degree of Celsius that Xiao Dangjia can heat the dish to within the specified time N?
// It is known that the starting temperature of the dish is 20 degrees Celsius (room temperature), 
// and cooling has no effect when the temperature of the dish is room temperature

#include <iostream>
using namespace std;

int main()
{
    int N,X,Y;
    
    cin >> N >> X >> Y;

    if (N % 2 != 0) {
        int celcius = 20 + (N - N / 2)* X - (N / 2) * Y;
        cout << celcius;
    } else {
        int celcius = 20 + (N - N / 2)* X - ((N / 2) - 1) * Y;
        cout << celcius;
    }
    

    return 0;
}