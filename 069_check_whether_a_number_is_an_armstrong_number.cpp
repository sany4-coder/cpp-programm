// Program 69: Write a C++ program to check whether a number is an Armstrong number.
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
    int n, original, digits = 0;
    long long sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    for (int t = n; t > 0; t /= 10) digits++;
    if (n == 0) digits = 1;
    for (int t = n; t > 0; t /= 10)
        sum += (long long)pow(t % 10, digits);
    if (sum == original) cout << original << " is an Armstrong number" << endl;
    else cout << original << " is not an Armstrong number" << endl;
    return 0;
}
