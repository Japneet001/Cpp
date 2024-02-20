class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (nums[mid] == target){
                return mid;
            }
            // If left part is sorted
            else if (nums[start] <= nums[mid]){
                // Check if target lies in left part of nums
                if (nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }
                // Target lies in right part of nums
                else{
                    start = mid + 1;
                }
            }
            // If right part is sorted
            else{                   
                // Check if target lies in right part of nums
                if (nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }
                // Target lies in left part of nums
                else{
                    end = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }
};