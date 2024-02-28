class Solution {
public:
    vector<int> evenOddBit(int n) {
        int bit;
        int position = 0;
        int even = 0;
        int odd = 0;
        vector<int> ans;
        while (n != 0){
            bit = n & 1;
            if (bit == 1){
                if (position % 2 == 0){     // even positions
                    even++;
                }
                else{
                    odd++;
                }
            }
            position++;
            n =n >> 1;
        }
        ans.push_back(even);
        ans.push_back(odd);
        return ans;
    }
};