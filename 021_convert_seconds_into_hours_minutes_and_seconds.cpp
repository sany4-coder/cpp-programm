// Program 21: Write a C++ program to convert seconds into hours, minutes and seconds.
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
    long long sec;
    cout << "Enter seconds: ";
    cin >> sec;
    cout << sec / 3600 << " hour(s), "
         << (sec % 3600) / 60 << " minute(s), "
         << sec % 60 << " second(s)" << endl;
    return 0;
}
