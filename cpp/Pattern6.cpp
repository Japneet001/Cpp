// PATTERN 6
/* For n = 4: 
       * 
      **
     ***
    ****
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Value: ";
    cin >> n;
    for (int i=0;i<n;i++){
        //spaces
        for (int j=n-i-1;j>0;j--){
            cout << " ";
        }
        //numbers
        for (int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}