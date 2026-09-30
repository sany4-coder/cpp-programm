// Program 30: Write a C++ program to find the smaller between two numbers.
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
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b) cout << a << " is smaller" << endl;
    else if (b < a) cout << b << " is smaller" << endl;
    else cout << "Both are equal" << endl;
    return 0;
}
