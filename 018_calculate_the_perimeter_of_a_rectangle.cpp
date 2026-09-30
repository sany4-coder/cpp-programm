// Program 18: Write a C++ program to calculate the perimeter of a rectangle.
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
    double l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Perimeter = " << 2 * (l + w) << endl;
    return 0;
}
