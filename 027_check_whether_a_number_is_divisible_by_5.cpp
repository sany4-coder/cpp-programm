// Program 27: Write a C++ program to check whether a number is divisible by 5.
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
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 5 == 0) cout << n << " is divisible by 5" << endl;
    else cout << n << " is not divisible by 5" << endl;
    return 0;
}
