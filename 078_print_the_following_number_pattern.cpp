// Program 78: Write a C++ program to print the following number pattern.
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

// NOTE: The pattern is missing in the PDF, so the classic number pattern is used:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}
