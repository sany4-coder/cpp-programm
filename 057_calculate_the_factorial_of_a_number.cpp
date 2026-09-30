// Program 57: Write a C++ program to calculate the factorial of a number.
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
    int n;
    unsigned long long fact = 1;
    cout << "Enter a non-negative integer (max 20): ";
    cin >> n;
    if (n < 0 || n > 20) {
        cout << "Invalid input" << endl;
        return 0;
    }
    for (int i = 2; i <= n; i++) fact *= i;
    cout << n << "! = " << fact << endl;
    return 0;
}
