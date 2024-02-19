class Solution {
public:
    int firstOcc(vector<int>& nums, int target){
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int ans = -1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int>& nums, int target){
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int ans = -1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if (nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pair;
        pair.push_back(firstOcc(nums, target));
        pair.push_back(lastOcc(nums, target));
        return pair;        
    }
};