class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = n;
        if (n == 1){
            return true;
        }
        else if (n <= 0 || n & 1 ){       // n is negative or 0 or odd
            return false;
        } 
        else{                             // n is even
            while(ans != 0){ 
                ans = ans / 2;
                if (ans == 1){            // True if ans becomes 1 (power of 2)
                    return true;
                }
                else if (ans & 1){        // False if ans becomes odd (not a power of 2)
                    return false;
                }  
            }
            return true;
        } 
        
    }
};