// Program 31: Write a C++ program to check whether a student has passed or failed.
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
    double marks;
    cout << "Enter marks (out of 100): ";
    cin >> marks;
    // Pass mark assumed to be 40
    if (marks >= 40) cout << "Passed" << endl;
    else cout << "Failed" << endl;
    return 0;
}
