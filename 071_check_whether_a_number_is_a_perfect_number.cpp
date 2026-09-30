// Program 71: Write a C++ program to check whether a number is a perfect number.
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
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    if (n > 0 && sum == n) cout << n << " is a perfect number" << endl;
    else cout << n << " is not a perfect number" << endl;
    return 0;
}
