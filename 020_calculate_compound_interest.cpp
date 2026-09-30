// Program 20: Write a C++ program to calculate compound interest.
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
    double p, r, t;
    cout << "Enter principal, rate (%) and time (years): ";
    cin >> p >> r >> t;
    double amount = p * pow(1 + r / 100, t);
    cout << "Compound Interest = " << amount - p << endl;
    cout << "Total Amount = " << amount << endl;
    return 0;
}
