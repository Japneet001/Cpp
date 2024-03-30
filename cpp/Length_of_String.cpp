#include <iostream>
using namespace std;

int getLength(char ch[])
{
    int length = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main(int argc, char const *argv[])
{
    char ch[100];
    cout << "Enter String: ";
    cin >> ch;

    cout << "Length of String " << ch << " is " << getLength(ch);
    return 0;
}