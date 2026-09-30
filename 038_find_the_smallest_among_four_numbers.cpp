// Program 38: Write a C++ program to find the smallest among four numbers.
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
    double smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    if (d < smallest) smallest = d;
    cout << "Smallest = " << smallest << endl;
    return 0;
}
