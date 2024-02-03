#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int len1=s1.size();
    int len2=s2.size();
    string s3=s1+s2;
    char temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout << len1 << " " << len2 << endl;
    cout << s3 << endl;
    cout << s1 << " " << s2 << endl;
    return 0;
}
