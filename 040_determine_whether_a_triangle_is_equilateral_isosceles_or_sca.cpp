// Program 40: Write a C++ program to determine whether a triangle is equilateral, isosceles or scalene.
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
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        cout << "Not a valid triangle" << endl;
    else if (a == b && b == c)
        cout << "Equilateral triangle" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isosceles triangle" << endl;
    else
        cout << "Scalene triangle" << endl;
    return 0;
}
