// Program 43: Write a C++ program to create a simple calculator using switch-case.
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
    char op;
    cout << "Enter expression (e.g. 5 + 3): ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << "Result = " << a + b << endl; break;
        case '-': cout << "Result = " << a - b << endl; break;
        case '*': cout << "Result = " << a * b << endl; break;
        case '/':
            if (b != 0) cout << "Result = " << a / b << endl;
            else cout << "Division by zero!" << endl;
            break;
        default: cout << "Invalid operator" << endl;
    }
    return 0;
}
