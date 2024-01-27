/* PATTERN 5: NUMBER PATTERN
    For n=4
        4444444
        4333334
        4322234
        4321234
        4322234
        4333334
        4444444
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a value: ";
    cin >> n;

    for (int i = 0; i < 2 * n - 1; ++i) {
        for (int j = 0; j < 2 * n - 1; ++j) {
            int minValue = min(i, j);
            minValue = min(minValue, 2 * n - 1 - i - 1);
            minValue = min(minValue, 2 * n - 1 - j - 1);
            cout << n - minValue;
        }
        cout << endl;
    }

    return 0;
}
