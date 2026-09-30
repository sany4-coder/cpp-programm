// Program 61: Write a C++ program to reverse a number.
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
    long long n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    bool neg = n < 0;
    if (neg) n = -n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number = " << (neg ? -rev : rev) << endl;
    return 0;
}
