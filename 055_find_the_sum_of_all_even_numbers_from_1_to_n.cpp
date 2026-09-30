// Program 55: Write a C++ program to find the sum of all even numbers from 1 to N.
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
    long long sum = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2) sum += i;
    cout << "Sum of even numbers = " << sum << endl;
    return 0;
}
