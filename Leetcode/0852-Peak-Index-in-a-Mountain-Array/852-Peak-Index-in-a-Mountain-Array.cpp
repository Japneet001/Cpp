class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            // increasing part
            else if (arr[mid] < arr[mid+1]){
                start = mid + 1;
            }
            // decreasing part
            else{
                end = mid;
            }
        }
        return -1;
    }
};