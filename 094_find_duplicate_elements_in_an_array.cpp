// Program 94: Write a C++ program to find duplicate elements in an array.
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
    bool found = false;
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++)
            if (arr[k] == arr[i]) { alreadyPrinted = true; break; }
        if (alreadyPrinted) continue;
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i]) count++;
        if (count > 1) {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found) cout << "None";
    cout << endl;
    return 0;
}
