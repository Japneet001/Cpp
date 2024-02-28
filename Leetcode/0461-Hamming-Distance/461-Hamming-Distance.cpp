class Solution {
public:
    int hammingDistance(int x, int y) {
        int bit_x = 0;
        int bit_y = 0;
        int count = 0;
        while (x != 0 || y != 0){
            bit_x = x & 1;
            bit_y = y & 1;
            if (bit_x != bit_y){
                count++;
            }
            x = x >> 1;
            y = y >> 1;
        }
        return count;
    }
};