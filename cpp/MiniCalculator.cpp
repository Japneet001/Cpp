#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter Operands: ";
    cin >> a >> b;
    char op;
    cout << "Enter Operator: ";
    cin >> op;
    switch (op){
        case '+': cout << a+b<< endl;
                  break;
        case '-': cout << a-b<< endl;
                  break;
        case '*': cout << a*b<< endl;
                  break;
        case '/': cout << a/b<< endl;
                  break;
        case '%': cout << a%b<< endl;
                  break;
        default: cout << "Invalid Operator" << endl;
    }
    return 0;
}