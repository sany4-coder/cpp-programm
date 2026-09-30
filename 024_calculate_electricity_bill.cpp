// Program 24: Write a C++ program to calculate electricity bill.
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
    int units;
    double bill;
    cout << "Enter units consumed: ";
    cin >> units;
    // Assumed slab rates:
    // 0-100 units   : 5 per unit
    // 101-200 units : 7 per unit
    // above 200     : 10 per unit
    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    cout << "Electricity Bill = " << bill << endl;
    return 0;
}
