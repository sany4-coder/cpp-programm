// Program 58: Write a C++ program to count the number of digits in a number.
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
    int count = 0;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    if (n == 0) count = 1;
    while (n > 0) {
        count++;
        n /= 10;
    }
    cout << "Number of digits = " << count << endl;
    return 0;
}
