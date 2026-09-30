// Program 42: Write a C++ program to check admission eligibility based on marks.
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
    double math, physics, chemistry;
    cout << "Enter marks in Maths, Physics, Chemistry: ";
    cin >> math >> physics >> chemistry;
    double total = math + physics + chemistry;
    double percent = total / 3;
    // Assumed rule: each subject >= 40 and average >= 60
    if (math >= 40 && physics >= 40 && chemistry >= 40 && percent >= 60)
        cout << "Eligible for admission" << endl;
    else
        cout << "Not eligible for admission" << endl;
    return 0;
}
