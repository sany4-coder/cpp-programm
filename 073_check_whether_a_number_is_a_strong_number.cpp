// Program 73: Write a C++ program to check whether a number is a strong number.
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
    int n, original, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    while (n > 0) {
        int digit = n % 10;
        int fact = 1;
        for (int i = 2; i <= digit; i++) fact *= i;
        sum += fact;
        n /= 10;
    }
    if (original > 0 && sum == original) cout << original << " is a strong number" << endl;
    else cout << original << " is not a strong number" << endl;
    return 0;
}
