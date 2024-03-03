// PROBLEM STATEMENT

/*
    Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
    There are ‘m’ number of students, and the task is to allocate all the books to the students.
        Allocate books in such a way that:
            1. Each student gets at least one book.
            2. Each book should be allocated to only one student.
            3. Book allocation should be in a contiguous manner.
    You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
    If the allocation of books is not possible, return -1.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int mid, int m, vector<int>& arr){
    int StudentCount = 0;
    int PageSum = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        if (PageSum + arr[i] <= mid){
            PageSum += arr[i];
        }
        else{
            StudentCount++;
            if (StudentCount > m || arr[i] > mid){
                return false;
            }
            PageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int start = 0;
    int end = sum;
    int ans = -1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(mid, m, arr)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter Size of array: ";
    cin >> n;
    vector<int> arr;
    int temp;
    cout << "Enter Values of array: ";
    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    int m;
    cout << "Enter number of students: ";
    cin >> m;
    cout << "Maximum number of pages assigned to a student is" << findPages(arr, n, m) << endl;
    return 0;
}
