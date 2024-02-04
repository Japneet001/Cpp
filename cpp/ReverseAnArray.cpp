#include <iostream>
using namespace std;

void OutputArray(int n,int arr[]){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReverseArray(int size,int arr[]){
    int temp;
    for (int i=0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    OutputArray(size, arr);
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

    cout << "Array is: " ;
    OutputArray(n, arr);
    
    ReverseArray(n, arr);
    

    
    return 0;
}