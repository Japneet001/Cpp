#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // input size of vector
    int N;
    cin >> N;

    // input elements of vector
    vector<int> v;
    int ele;
    for (int i = 1; i < N + 1; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    // input index of the element to erase
    int x;
    cin >> x;

    // input the range [a, b) of elements to erase
    int a, b;
    cin >> a >> b;

    // Erase the element at index x-1
    v.erase(v.begin() + x - 1);

    // Erase the elements in the range [a-1, b-1)
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    // Print the size of the vector
    cout << v.size() << endl;

    // Print the elements of the vector
    for (int i = 1; i < v.size() + 1; i++)
    {
        cout << v[i - 1] << " ";
    }
    return 0;
}
