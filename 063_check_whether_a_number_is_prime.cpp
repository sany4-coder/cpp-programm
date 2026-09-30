// Program 63: Write a C++ program to check whether a number is prime.
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
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 2) isPrime = false;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) cout << n << " is a prime number" << endl;
    else cout << n << " is not a prime number" << endl;
    return 0;
}
