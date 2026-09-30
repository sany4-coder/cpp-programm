// Program 66: Write a C++ program to find the power of a number using a loop.
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
    double base, result = 1;
    int exp;
    cout << "Enter base and exponent (non-negative integer): ";
    cin >> base >> exp;
    if (exp < 0) {
        cout << "Please enter a non-negative exponent." << endl;
        return 0;
    }
    for (int i = 1; i <= exp; i++) result *= base;
    cout << base << "^" << exp << " = " << result << endl;
    return 0;
}
