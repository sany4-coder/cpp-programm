// Program 51: Write a C++ program to print all even numbers from 1 to N.
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
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    cout << endl;
    return 0;
}
