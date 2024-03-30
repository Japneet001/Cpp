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

char *reverse_of_string(char ch[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        swap(ch[i], ch[length - i - 1]);
    }
    return ch;
}

int main(int argc, char const *argv[])
{
    char ch[100];
    cout << "Enter String: ";
    cin >> ch;
    int length = getLength(ch);
    cout << "Reverse of String is: " << reverse_of_string(ch, length);
    return 0;
}