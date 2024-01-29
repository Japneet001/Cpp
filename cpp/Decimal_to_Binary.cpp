// Decimal to Binary
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter any number in decimal form: ";
    cin >> n;
    int bit;
    int ans=0;
    int power=0;
    while(n!=0){
        bit=n&1;
        ans=ans+bit*pow(10,power); 
        n=n>>1;
        power++;
    }
    cout << ans;
    return 0;
}
