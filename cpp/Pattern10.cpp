// PATTERN 10
/*  For n=5
        1234554321
        1234**4321
        123****321
        12******21
        1********1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a value: ";
    cin >> n;
    for (int i=0;i<n;i++){
        //numbers1
        for (int j=0;j<n-i;j++){
            cout << j+1;
        }
        //star pattern 
        for (int j=0;j<2*i;j++){
            cout << "*";
        }
        //numbers2
        for (int j=n-i;j>0;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
