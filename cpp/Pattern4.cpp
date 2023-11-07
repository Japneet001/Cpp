// PATTERN 4
/* For n = 3: 
    1 2 3
    4 5 6
    7 8 9
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Value: ";
    cin >> n;
    int k=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}