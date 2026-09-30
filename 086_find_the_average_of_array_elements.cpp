// Program 86: Write a C++ program to find the average of array elements.
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
    if (n <= 0) { cout << "No elements." << endl; return 0; }
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Average = " << (double)sum / n << endl;
    return 0;
}
