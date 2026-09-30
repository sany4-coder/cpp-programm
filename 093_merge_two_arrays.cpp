// Program 93: Write a C++ program to merge two arrays.
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
    int n1, n2, a[100], b[100], merged[200];
    cout << "Enter size of first array (max 100): ";
    cin >> n1;
    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; i++) cin >> a[i];
    cout << "Enter size of second array (max 100): ";
    cin >> n2;
    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; i++) cin >> b[i];

    int k = 0;
    for (int i = 0; i < n1; i++) merged[k++] = a[i];
    for (int i = 0; i < n2; i++) merged[k++] = b[i];

    cout << "Merged array: ";
    for (int i = 0; i < k; i++) cout << merged[i] << " ";
    cout << endl;
    return 0;
}
