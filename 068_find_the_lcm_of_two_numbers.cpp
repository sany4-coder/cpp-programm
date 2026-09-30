// Program 68: Write a C++ program to find the LCM of two numbers.
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
    cout << "Enter two positive numbers: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Please enter positive numbers." << endl;
        return 0;
    }
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    long long lcm = (long long)a / x * b;
    cout << "LCM = " << lcm << endl;
    return 0;
}
