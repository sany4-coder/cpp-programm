// Program 23: Write a C++ program to calculate gross salary.
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
    double basic;
    cout << "Enter basic salary: ";
    cin >> basic;
    // Assumption: DA = 40% of basic, HRA = 20% of basic
    double da = 0.40 * basic;
    double hra = 0.20 * basic;
    cout << "DA = " << da << endl;
    cout << "HRA = " << hra << endl;
    cout << "Gross Salary = " << basic + da + hra << endl;
    return 0;
}
