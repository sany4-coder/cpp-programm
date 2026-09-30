// Program 15: Write a C++ program to calculate the area of a circle.
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
    const double PI = 3.14159265358979;
    double r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area = " << PI * r * r << endl;
    return 0;
}
