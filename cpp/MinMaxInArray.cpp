#include <iostream>
#include <climits>
using namespace std;

void OutputArray(int n,int arr[]){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter values of array: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    OutputArray(n,arr);

    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++){
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }
    cout << "Maximum element in the array is: " << maximum << endl;
    cout << "Minimum element in the array is: " << minimum << endl;
    

    return 0;
}
