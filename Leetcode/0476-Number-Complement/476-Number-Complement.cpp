class Solution {
public:
    int findComplement(int num) {
        int bit;
        int comp;
        int dec_ans = 0;
        int i = 0;
        while(num != 0){
            bit = num & 1;
            comp = bit ^ 1;
            dec_ans = comp*pow(2,i)+dec_ans;
            num = num >> 1;
            i++;
        }

        return dec_ans;
    }
};