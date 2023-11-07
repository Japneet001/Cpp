// PATTERN 5
/* For n = 4: 
    1 
    2 3
    3 4 5 
    4 5 6 7
*/


#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Value: ";
    cin >> n;
    
    // METHOD 1: USING EXTRA VARIABLE
    for (int i=1;i<=n;i++){
        int k=i;
        for (int j=0;j<i;j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    // METHOD 2: WITHOUT USING EXTRA VARIABLE
    for (int i=1;i<=n;i++){
        for (int j=1;j<i+1;j++){
            cout << i+j-1 << " ";
        }
        cout << endl;
    }
    return 0;
}