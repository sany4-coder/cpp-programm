// Program 47: Write a C++ program to check whether a character is a vowel using switch-case.
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
    cout << "Enter an alphabet: ";
    cin >> ch;
    switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << ch << " is a Vowel" << endl; break;
        default:
            if (isalpha(ch)) cout << ch << " is a Consonant" << endl;
            else cout << "Not an alphabet" << endl;
    }
    return 0;
}
