#include <iostream>
using namespace std;

void PrintArray(int n,int arr[]){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Array is in increasing order
int BinarySearch(int size, int arr[], int key){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==key){
            return mid;
        }
        // target is to the right of the mid element
        else if (arr[mid] < key){
            start = mid + 1;
        }
        // target is to the left of the mid element
        else{
            end = mid - 1;
        }
    }
    // target not found
    return -1;
}

int main(int argc, char const *argv[]){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter values of array: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Array: ";
    PrintArray(n, arr);

    int target;
    cout << "Enter key to be searched: ";
    cin >> target;

    int index = BinarySearch(n,arr,target);
    if (index != (-1)){
        cout << target << " found at: " << index;
    }
    else{
        cout << target << " not found";
    }
    return 0;
}
