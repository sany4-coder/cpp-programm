// Program 97: Write a C++ program to find the second largest element in an array.
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
    if (n < 2) { cout << "At least 2 elements are needed." << endl; return 0; }
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) cout << "No second largest element (all elements are equal)." << endl;
    else cout << "Second largest = " << second << endl;
    return 0;
}
