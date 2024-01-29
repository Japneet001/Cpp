//Binary to Decimal
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter Binary form of any number: ";
    cin >> n;
    int digit;
    int ans=0;
    int power=0;
    while(n!=0){
        digit=n%10;
        ans=digit*pow(2,power)+ans;
        n=n/10;
        power++;
    }
    cout << "Decimal form is: " << ans;
    return 0;
}
