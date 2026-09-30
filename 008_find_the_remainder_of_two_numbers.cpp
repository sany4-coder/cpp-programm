// Program 8: Write a C++ program to find the remainder of two numbers.
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
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (b == 0)
        cout << "Division by zero is not possible." << endl;
    else
        cout << "Remainder = " << a % b << endl;
    return 0;
}
