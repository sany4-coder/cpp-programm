// Program 80: Write a C++ program to print Pascal's triangle.
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
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) cout << "  ";
        long long c = 1;
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << c;
            c = c * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
