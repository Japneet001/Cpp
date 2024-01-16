/* PATTERN 2: NUMBER PATTERN
    For n=5
            1
           23
          345
         4567
        56789
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){        
        //spaces
        for (int j=n-i-1;j>0;j--){
            cout << " ";
        }
        //numbers
        for (int j=i+1;j<2*i+2;j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}