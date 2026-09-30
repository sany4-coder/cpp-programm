// Program 50: Write a C++ program to print numbers from N to 1.
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
    for (int i = n; i >= 1; i--) cout << i << " ";
    cout << endl;
    return 0;
}
