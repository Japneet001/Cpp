// Create a C++ program that takes an array of integers as input and swaps alternate elements of the array. The program should ensure that the adjacent elements are swapped in pairs, maintaining the order of elements in the array.

#include <iostream>
using namespace std;


void printArray(int n, int arr[]){
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    } 
}

void swapAlternative(int n, int arr[]){
    int temp;
    for(int i = 0 ; i < n - 1 ; i += 2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    printArray(n, arr);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    swapAlternative(n, arr);
    return 0;
}
