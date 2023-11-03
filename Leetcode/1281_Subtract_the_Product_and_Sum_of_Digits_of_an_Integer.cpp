class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n>0){
            int unit_digit=n%10;
            sum+=unit_digit;
            product*=unit_digit;
            n=n/10;
        }
        return product-sum;
        
    }
};