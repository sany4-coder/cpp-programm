// Program 7: Write a C++ program to divide two numbers.
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
    if (b == 0)
        cout << "Division by zero is not possible." << endl;
    else
        cout << "Quotient = " << a / b << endl;
    return 0;
}
