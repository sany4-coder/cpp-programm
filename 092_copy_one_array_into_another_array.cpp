// Program 92: Write a C++ program to copy one array into another array.
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
    int copy[100];
    for (int i = 0; i < n; i++) copy[i] = arr[i];
    cout << "Copied array: ";
    for (int i = 0; i < n; i++) cout << copy[i] << " ";
    cout << endl;
    return 0;
}
