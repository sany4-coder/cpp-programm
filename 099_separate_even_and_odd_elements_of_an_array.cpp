// Program 99: Write a C++ program to separate even and odd elements of an array.
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
    int even[100], odd[100], e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }
    cout << "Even elements: ";
    for (int i = 0; i < e; i++) cout << even[i] << " ";
    cout << endl << "Odd elements: ";
    for (int i = 0; i < o; i++) cout << odd[i] << " ";
    cout << endl;
    return 0;
}
