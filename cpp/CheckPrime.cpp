// CHECK WHETHER A NUMBER IS PRIME OR NOT
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // METHOD 1
    bool flag = true;
    if (n <= 1){
        cout << "Not Prime";
    }
    else{
        for (int i=2; i < n; i++){
            if (n % i == 0){
                flag = false;
                break;
            }
        }
    }
    if (flag){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
    
    // METHOD 2
    if (n <= 1){
        cout << "Not Prime";
    }
    else{
        for (int i=2; i < n; i++){
            if (n % i == 0){
                cout << "Not Prime";
                return 0;
            }
        }
    }
    cout << "Prime";
    return 0;
}