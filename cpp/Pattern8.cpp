// PATTERN 8
/* For n = 3: 
    A B C
    D E F
    G H I
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a value: ";
    cin >> n;
    char ch='A';
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << ch << " ";
            ch+=1;
        }
        cout << endl;
    }
    return 0;
}
