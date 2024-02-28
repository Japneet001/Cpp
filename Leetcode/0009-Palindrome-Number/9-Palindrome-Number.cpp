class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        int rem;
        long new_num = 0;
        if (x<0){
            return false;
        }
        else{
            while (x){
                rem = x % 10;
                new_num = new_num * 10 + rem;
                x /= 10;
            }
            if (new_num == n){
                return true;
            }
            // else{
            //     return false;
            // }
        }
        return false;
    }
};