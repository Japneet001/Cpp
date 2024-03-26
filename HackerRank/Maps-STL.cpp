#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> mp;
    int Q; // number of Queries
    cin >> Q;
    int prevMarks = 0;
    for (int i = 0; i < Q; i++)
    {
        int type; // y is type of query and x in the integer
        cin >> type;
        if (type == 1)
        {
            string X; // name of student
            cin >> X;
            int Y; // marks of student Y
            cin >> Y;
            mp[X] += Y;
        }
        else
        {
            string X; // name of student
            cin >> X;
            if (type == 2)
            {
                mp.erase(X);
            }
            else
            {
                cout << mp[X] << endl;
            }
        }
    }
    return 0;
}