// Program 70: Write a C++ program to print Armstrong numbers within a range.
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
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    cout << "Armstrong numbers between " << start << " and " << end << ":" << endl;
    for (int n = start; n <= end; n++) {
        int digits = 0;
        for (int t = n; t > 0; t /= 10) digits++;
        if (n == 0) digits = 1;
        long long sum = 0;
        for (int t = n; t > 0; t /= 10)
            sum += (long long)round(pow(t % 10, digits));
        if (n >= 0 && sum == n) cout << n << " ";
    }
    cout << endl;
    return 0;
}
