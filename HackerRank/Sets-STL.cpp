#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int Q; // number of Queries
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int y, x; // y is type of query and x in the integer
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            s.erase(x);
        }
        else
        {
            if (s.count(x))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
