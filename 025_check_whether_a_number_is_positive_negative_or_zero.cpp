// Program 25: Write a C++ program to check whether a number is positive, negative or zero.
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
    double n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) cout << "Positive" << endl;
    else if (n < 0) cout << "Negative" << endl;
    else cout << "Zero" << endl;
    return 0;
}
