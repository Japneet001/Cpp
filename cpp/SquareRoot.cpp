#include <iostream>
using namespace std;
int IntSquareRoot(int n){
    int start = 0;
    int end = n;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (mid * mid == n){
            return mid;
        }
        else if (mid * mid < n){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
    
}

double SquareRoot(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    int precision;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Enter Precision: ";
    cin >> precision;
    int intSqroot = IntSquareRoot(n);
    double Sqroot = SquareRoot(n, precision, intSqroot);
    cout << "Square Root of " << n << " is " << Sqroot << endl;
    return 0;
}
