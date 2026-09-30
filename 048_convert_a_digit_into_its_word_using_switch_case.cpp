// Program 48: Write a C++ program to convert a digit into its word using switch-case.
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
    int d;
    cout << "Enter a digit (0-9): ";
    cin >> d;
    switch (d) {
        case 0: cout << "Zero" << endl; break;
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        case 7: cout << "Seven" << endl; break;
        case 8: cout << "Eight" << endl; break;
        case 9: cout << "Nine" << endl; break;
        default: cout << "Not a single digit" << endl;
    }
    return 0;
}
