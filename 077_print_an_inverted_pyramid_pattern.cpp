// Program 77: Write a C++ program to print an inverted pyramid pattern.
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
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
