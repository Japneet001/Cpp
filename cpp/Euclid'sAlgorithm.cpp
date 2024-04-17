#include <iostream>
using namespace std;
int EuclidAlgorithm(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }

    if (a > b)
    {
        a = a - b;
    }
    else
    {
        b = b - a;
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter the values: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << EuclidAlgorithm(a, b);
    return 0;
}