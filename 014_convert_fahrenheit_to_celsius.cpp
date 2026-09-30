// Program 14: Write a C++ program to convert Fahrenheit to Celsius.
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
    double f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    cout << "Celsius = " << (f - 32) * 5 / 9 << endl;
    return 0;
}
