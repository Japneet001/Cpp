// PATTERN 2
/* For n = 4: 
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<n+1; i++){
        for(int j=0; j<n; j++){
            cout << i << " ";
        }
        cout << endl;
    }

}