#include <iostream>
using namespace std;
int findPivot(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]){
            return mid;
        }
        else if (arr[mid] > arr[mid - 1]){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Pivot element of the array is present at " << findPivot(arr, n);
    return 0;
}