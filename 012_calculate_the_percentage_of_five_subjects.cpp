// Program 12: Write a C++ program to calculate the percentage of five subjects.
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
    double marks[5], total = 0;
    cout << "Enter marks of 5 subjects (out of 100 each): ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    cout << "Total = " << total << endl;
    cout << "Percentage = " << (total / 500) * 100 << "%" << endl;
    return 0;
}
