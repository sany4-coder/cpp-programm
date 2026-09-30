// Program 85: Write a C++ program to find the sum of array elements.
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
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum = " << sum << endl;
    return 0;
}
