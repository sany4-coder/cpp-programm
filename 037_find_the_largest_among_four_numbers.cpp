// Program 37: Write a C++ program to find the largest among four numbers.
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
    double a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    double largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;
    cout << "Largest = " << largest << endl;
    return 0;
}
