class Solution {
public:
    long reverse_num(int n) {
        int digit;
        long reverse_num = 0;
        while(n != 0){
            digit = n % 10;
            reverse_num = reverse_num * 10 + digit;
            n = n / 10;
        }
        return reverse_num;
    }


    int reverse(int x) {
        long ans;
        long int temp;

        // reverse conditions
        if (x == 0){
            ans = 0;
        }
        else{
            ans  = reverse_num(x);
        }

        // ans conditions
        if (ans < INT_MIN || ans > INT_MAX){
            ans = 0;
        }
        return (int)ans;
    }
};