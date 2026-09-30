// Program 74: Write a C++ program to print strong numbers within a range.
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
    cout << "Strong numbers between " << start << " and " << end << ":" << endl;
    for (int n = max(start, 1); n <= end; n++) {
        int t = n, sum = 0;
        while (t > 0) {
            int digit = t % 10;
            int fact = 1;
            for (int i = 2; i <= digit; i++) fact *= i;
            sum += fact;
            t /= 10;
        }
        if (sum == n) cout << n << " ";
    }
    cout << endl;
    return 0;
}
