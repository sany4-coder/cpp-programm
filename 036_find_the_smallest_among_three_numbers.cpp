// Program 36: Write a C++ program to find the smallest among three numbers.
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
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    cout << "Smallest = " << smallest << endl;
    return 0;
}
