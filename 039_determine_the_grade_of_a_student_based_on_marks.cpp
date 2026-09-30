// Program 39: Write a C++ program to determine the grade of a student based on marks.
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
    double marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    if (marks < 0 || marks > 100) cout << "Invalid marks" << endl;
    else if (marks >= 90) cout << "Grade: A+" << endl;
    else if (marks >= 80) cout << "Grade: A" << endl;
    else if (marks >= 70) cout << "Grade: B" << endl;
    else if (marks >= 60) cout << "Grade: C" << endl;
    else if (marks >= 50) cout << "Grade: D" << endl;
    else if (marks >= 40) cout << "Grade: E" << endl;
    else cout << "Grade: F (Fail)" << endl;
    return 0;
}
