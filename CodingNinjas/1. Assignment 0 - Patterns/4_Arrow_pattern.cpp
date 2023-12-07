/* PATTERN 4: NUMBER PATTERN
    For n=7
        *
         **
          ***
           ****
          ***
         **
        *
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //upper portion
    for (int i=0;i<(n/2)+1;i++){
        //spaces
        for (int j=0;j<i;j++){
            cout << " ";
        }
        //triangle 
        for (int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    //lower portion
    for (int i=(n/2)+1;i<n;i++){
        //spaces
        for (int j=n-i-1;j>0;j--){
            cout << " ";
        }
        //triangle
        for (int j=n-i;j>0;j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}