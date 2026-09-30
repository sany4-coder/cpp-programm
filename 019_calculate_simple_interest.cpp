// Program 19: Write a C++ program to calculate simple interest.
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
    cout << "Simple Interest = " << (p * r * t) / 100 << endl;
    return 0;
}
