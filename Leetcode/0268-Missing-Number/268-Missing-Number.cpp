class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }
        for (int i = 0; i < nums.size() + 1; i++){
            ans = ans ^ i;
        }
        return ans;
    }
};