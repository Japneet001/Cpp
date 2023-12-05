// PATTERN 7
/*  For n=5
        1234554321
        1234  4321
        123    321
        12      21
        1        1
        1        1
        12      21
        123    321
        1234  4321
        1234554321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a value: ";
    cin >> n;
    // Upper Portion
    for (int i=0;i<n;i++){
        // Left Portion
        //numbers1
        for (int j=0;j<n-i;j++){
            cout << j+1;
        }
        // space pattern 1
        for (int j=0;j<i;j++){
            cout << " ";
        }
        // Right Portion
        // space pattern 2
        for (int j=0;j<i;j++){
            cout << " ";
        }
        //numbers2
        for (int j=n-i;j>0;j--){
            cout << j;
        }
        cout << endl;
    }
    // Lower Portion
    for (int i=n-1;i>=0;i--){
        // Left Portion
        //numbers1
        for (int j=0;j<n-i;j++){
            cout << j+1;
        }
        // space pattern 1
        for (int j=0;j<i;j++){
            cout << " ";
        }
        // Right Portion
        // space pattern 2
        for (int j=0;j<i;j++){
            cout << " ";
        }
        //numbers2
        for (int j=n-i;j>0;j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
