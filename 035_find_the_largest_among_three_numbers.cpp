// Program 35: Write a C++ program to find the largest among three numbers.
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
    double largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    cout << "Largest = " << largest << endl;
    return 0;
}
