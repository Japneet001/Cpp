/* PATTERN 3: NUMBER PATTERN
    For n=5
        1        1
        12      21
        123    321
        1234  4321
        1234554321
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<n+1;i++){   
        //left triangle  
        for (int j=1;j<i+1;j++){
          cout << j;
        }   
        //spaces
        for (int j=2*(n-i);j>0;j--){
          cout << " ";
        }
        //right triangle
        for (int j=i;j>0;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}