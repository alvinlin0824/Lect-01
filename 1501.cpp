// Bond, whose full name is James Bond, aspires to be a spy.
// After passing many difficulties, he finally came to the last test before he became a qualified spy.
// This test is a communication test, Bond and his teammates must talk to each other through code.
// So he had to decode the code he got to analyze it.
// The following is the secret code he and his teammates decided on privately. Their secret code is the number N.
// Their secret codes will eventually be decrypted into "YES" or "NO".
// If N is a multiple of 7 or the number contains '7', it is "YES", otherwise it is "NO".
// Because the number passed to Bond by his teammates was too big, 
// Bond couldn't figure out the answer quickly, so he asked you to help him solve this problem.

#include <iostream>
#include <string>

using namespace std;

bool isMultipleOf7(int n) {
    return n % 7 == 0;
}

bool containsDigit7(int n) {
    while (n > 0) {
        if (n % 10 == 7) {
            return true;
        }
        n /= 10;
    }
    return false;
}

string decodeSecretCode(int N) {
    if (isMultipleOf7(N) || containsDigit7(N)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int N;
    cin >> N;
    
    string result = decodeSecretCode(N);
    
    cout << result << endl;
    
    return 0;
}
