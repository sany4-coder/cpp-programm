// Program 65: Write a C++ program to generate Fibonacci series.
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
    long long a = 0, b = 1;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
