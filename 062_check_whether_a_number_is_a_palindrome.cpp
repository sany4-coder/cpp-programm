// Program 62: Write a C++ program to check whether a number is a palindrome.
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
    long long n, original, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    if (n < 0) {
        cout << "Negative numbers are not considered palindromes here." << endl;
        return 0;
    }
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == original) cout << original << " is a palindrome" << endl;
    else cout << original << " is not a palindrome" << endl;
    return 0;
}
