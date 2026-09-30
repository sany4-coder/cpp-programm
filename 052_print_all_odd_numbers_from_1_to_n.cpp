// Program 52: Write a C++ program to print all odd numbers from 1 to N.
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
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    cout << endl;
    return 0;
}
