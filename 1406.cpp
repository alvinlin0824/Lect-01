// Ah Zhai has been single for 21 years this year, and he can't break the curse of being single.
// But he was not discouraged by this. He still had faith in love and hoped to meet the right her (him, it?) one day.
// A-Zhai's good friend was touched by A-Zhai's spirit, 
// so he bought a video for A-Zhai on how to get out of being single.
// (One piece seems to cost more than a thousand yuan, what a robbery! This is not the point).
// So A Zhai worked hard and started studying seriously. Since the video is very long, 
// and there is a lot of information that Ah Zhai actually knew very early on,
// So he planned to use the remote control to fast forward to the key part.
// It is known that the focus of the film starts from the L second second of the film, 
// and now A Zhai is at the S second second of the film.
// It is known that if A Zhai presses fast forward once, 
// it will fast forward 5 seconds. If the time exceeds the Lth second, 
// A Zhai needs to rewind. Pressing rewind once will go back to the previous 2 seconds.
// PS: If A Zhai is at 1 second now, but he wants to press rewind, 
// it will be unsuccessful because the video does not have negative seconds. So that operation does not count.
// What is the minimum number of times A-Zhai needs to press to reach the Lth second? 
// It is known that the video will pause when the remote control is pressed.

#include <iostream>
using namespace std;

int main()
{
    int L, S;
    
    cin >> L >> S;
    
    double x;
    int y = 0;
    
    while (true)
    {
        x = double(((L-S) + 2*y)) / 5;
        if (x == int(x) && x >= 0)
            break;
        y++;
    }
    // cout << x << endl << y ;
    cout << x + y << endl;
    return 0;
}