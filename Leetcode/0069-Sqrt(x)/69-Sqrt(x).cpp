class Solution {
public:
    int mySqrt(int x) {
        // Handling edge cases where x is 0 or 1
        if (x == 0 || x == 1){
            return x;
        }
        
        // Binary search loop
        int start = 0; 
        int end = x;   
        int ans = 0;
        while (start <= end){
            int mid = start + (end - start) / 2; 
            if (mid <= x/mid){  
                ans = mid;      
                start = mid + 1; 
            }
            else{
                end = mid - 1;   
            }
        }
        return ans;
    }
};
