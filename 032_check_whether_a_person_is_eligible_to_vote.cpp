// Program 32: Write a C++ program to check whether a person is eligible to vote.
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
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18) cout << "Eligible to vote" << endl;
    else cout << "Not eligible to vote" << endl;
    return 0;
}
