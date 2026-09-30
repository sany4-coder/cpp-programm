// Program 16: Write a C++ program to calculate the area of a triangle.
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
    double base, height;
    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Area = " << 0.5 * base * height << endl;
    return 0;
}
