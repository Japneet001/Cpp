#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int ele;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    // sorting the vector
    sort(v.begin(), v.end());

    // printing the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
