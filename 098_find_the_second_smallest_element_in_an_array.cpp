// Program 98: Write a C++ program to find the second smallest element in an array.
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
    int smallest = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        } else if (arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }
    if (second == INT_MAX) cout << "No second smallest element (all elements are equal)." << endl;
    else cout << "Second smallest = " << second << endl;
    return 0;
}
