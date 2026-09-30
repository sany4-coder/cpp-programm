// Program 90: Write a C++ program to count positive and negative elements in an array.
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
    int n, arr[100];
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero << endl;
    return 0;
}
