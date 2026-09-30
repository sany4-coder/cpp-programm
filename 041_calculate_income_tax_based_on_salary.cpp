// Program 41: Write a C++ program to calculate income tax based on salary.
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
    double salary, tax = 0;
    cout << "Enter annual salary: ";
    cin >> salary;
    // Assumed slabs:
    // up to 250000        : 0%
    // 250001 - 500000     : 5%
    // 500001 - 1000000    : 20%
    // above 1000000       : 30%
    if (salary > 1000000)
        tax = (salary - 1000000) * 0.30 + 500000 * 0.20 + 250000 * 0.05;
    else if (salary > 500000)
        tax = (salary - 500000) * 0.20 + 250000 * 0.05;
    else if (salary > 250000)
        tax = (salary - 250000) * 0.05;
    cout << "Income Tax = " << tax << endl;
    return 0;
}
