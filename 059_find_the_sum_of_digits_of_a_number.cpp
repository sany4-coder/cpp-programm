// Program 59: Write a C++ program to find the sum of digits of a number.
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
    long long n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits = " << sum << endl;
    return 0;
}
