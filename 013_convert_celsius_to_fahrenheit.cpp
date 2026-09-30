// Program 13: Write a C++ program to convert Celsius to Fahrenheit.
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
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    cout << "Fahrenheit = " << (c * 9 / 5) + 32 << endl;
    return 0;
}
