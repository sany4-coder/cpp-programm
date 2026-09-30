// Program 26: Write a C++ program to check whether a number is even or odd.
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
    if (n % 2 == 0) cout << n << " is Even" << endl;
    else cout << n << " is Odd" << endl;
    return 0;
}
