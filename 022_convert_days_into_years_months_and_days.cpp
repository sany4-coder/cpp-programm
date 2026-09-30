// Program 22: Write a C++ program to convert days into years, months and days.
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
    int days;
    cout << "Enter number of days: ";
    cin >> days;
    // Assumption: 1 year = 365 days, 1 month = 30 days
    int years = days / 365;
    int rem = days % 365;
    int months = rem / 30;
    int d = rem % 30;
    cout << years << " year(s), " << months << " month(s), " << d << " day(s)" << endl;
    return 0;
}
