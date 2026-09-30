// Program 72: Write a C++ program to print perfect numbers within a range.
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
    cout << "Perfect numbers between " << start << " and " << end << ":" << endl;
    for (int n = max(start, 1); n <= end; n++) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) sum += i;
        if (sum == n) cout << n << " ";
    }
    cout << endl;
    return 0;
}
