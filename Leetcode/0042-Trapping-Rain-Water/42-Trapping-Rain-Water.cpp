class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();   // size of height array (number of buildings)

        // Array to store the maximum height to the right of each building
        int right_height[n];
        right_height[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--){
            right_height[i] = max(right_height[i + 1], height[i]);
        }

        // Array to store the maximum height to the left of each building
        int left_height[n];
        left_height[0] = height[0];
        for (int i = 1; i < n; i++){
            left_height[i] = max(left_height[i - 1], height[i]);
        }

        // Array to store the minimum of the maximum heights from left and right for each building
        int min_arr[n];
        for (int i = 0; i < n; i++){
            min_arr[i] = min(left_height[i], right_height[i]);
        }

        // Calculate the trapped water by subtracting height of each building from the minimum height around it
        int trapped_water = 0;
        for (int i = 0; i < n; i++){
            trapped_water += (min_arr[i] - height[i]);
        }

        return trapped_water;
    }
};