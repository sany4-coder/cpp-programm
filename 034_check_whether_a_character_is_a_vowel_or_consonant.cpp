// Program 34: Write a C++ program to check whether a character is a vowel or consonant.
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (!isalpha(ch)) {
        cout << "Not an alphabet" << endl;
    } else {
        char c = tolower(ch);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cout << ch << " is a Vowel" << endl;
        else
            cout << ch << " is a Consonant" << endl;
    }
    return 0;
}
