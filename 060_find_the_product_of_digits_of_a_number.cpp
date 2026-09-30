// Program 60: Write a C++ program to find the product of digits of a number.
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
    long long product = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    if (n == 0) product = 0;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    cout << "Product of digits = " << product << endl;
    return 0;
}
