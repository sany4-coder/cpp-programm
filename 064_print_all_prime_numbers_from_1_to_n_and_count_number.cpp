// Program 64: Write a C++ program to print all prime numbers from 1 to N and count number.
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
    int n, count = 0;
    cout << "Enter N: ";
    cin >> n;
    cout << "Prime numbers from 1 to " << n << ":" << endl;
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
            count++;
        }
    }
    cout << endl << "Total prime numbers = " << count << endl;
    return 0;
}
