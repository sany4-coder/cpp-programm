// Program 95: Write a C++ program to remove duplicate elements from an array.
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
    int unique[100], m = 0;
    for (int i = 0; i < n; i++) {
        bool exists = false;
        for (int j = 0; j < m; j++)
            if (unique[j] == arr[i]) { exists = true; break; }
        if (!exists) unique[m++] = arr[i];
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < m; i++) cout << unique[i] << " ";
    cout << endl;
    return 0;
}
