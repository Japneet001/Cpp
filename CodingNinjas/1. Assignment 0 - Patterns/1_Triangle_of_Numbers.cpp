/* PATTERN 1: TRIANGLE OF NUMBERS
    For n=4
           1
          232
         34543
        4567654
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n;
    for (int i=1;i<n+1;i++){
        k=i;
        
        //spaces
        for (int j=n-i;j>0;j--){
            cout << " ";
        }
        //left triangle
        for (int j=0;j<i-1;j++){
            cout << k;
            k++;
        }
        //right triangle
        for (int j=2*i-1;j>i-1;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}