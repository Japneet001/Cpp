/* PATTERN 6: PRINT THE PATTERN
    For n=5
        1 2 3 4 5
        11 12 13 14 15
        21 22 23 24 25
        16 17 18 19 20
        6 7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a value: ";
    cin >> n;

    int P = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = P; j < P + n; j++) {
            cout << j << " ";
        }
        cout << endl;

        if (i == ((n + 1) / 2)) {
            if (n % 2 != 0) {
                P = n * (n - 2) + 1;
            } else {
                P = n * (n - 1) + 1;
            }
        } else if (i > ((n + 1) / 2)) {
            P = P - 2 * n;
        } else {
            P = P + 2 * n;
        }
    }

    return 0;
}
