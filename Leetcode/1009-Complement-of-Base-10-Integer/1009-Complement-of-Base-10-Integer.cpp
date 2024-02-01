class Solution {
public:
    int bitwiseComplement(int n) {
        int bit;
        int comp;
        int multiplier = 1;
        int dec_ans = 0;
        if (n==0){
            return 1;
        } 
        while(n!=0){
            bit = n&1;
            comp = bit^1;
            dec_ans = comp*multiplier + dec_ans;
            n = n >> 1;
            multiplier *= 2;
        }
        return dec_ans;
        
    }
};