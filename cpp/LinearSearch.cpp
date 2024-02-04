#include <iostream>
using namespace std;

void OutputArray(int n,int arr[]){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int LinearSearch(int size,int arr[], int key){
    for (int i=0;i<size;i++){
        if (key == arr[i]){
            cout << key << " found at index" << i;
            return 0;
        }
    }
    cout << key << " not found";
    return 0;
}

int main(int argc, char const *argv[]){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter values of array: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the element to be searched: ";
    cin >> k;

    cout << "Array is: " ;
    OutputArray(n, arr);
    cout << endl;
    
    LinearSearch(n, arr, k);
    return 0;
}