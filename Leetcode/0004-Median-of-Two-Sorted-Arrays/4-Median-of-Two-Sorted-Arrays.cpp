class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Initialize variables and arrays
        int i = 0; 
        int j = 0; 
        int size1 = nums1.size(); 
        int size2 = nums2.size(); 
        int size = size1 + size2; 
        int nums[size]; // Combined array to store sorted elements from nums1 and nums2
        int k = 0; 
        double median; 

        // Merge the arrays nums1 and nums2 into the combined array nums
        while (i < size1 && j < size2){
            if (nums1[i] < nums2[j]){
                nums[k] = nums1[i];
                i++;
            }
            else{
                nums[k] = nums2[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements from nums1 if any
        if (i < size1){
            while (i < size1){
                nums[k] = nums1[i];
                i++;
                k++;
            }
        }
        // Copy remaining elements from nums2 if any
        else{
            while (j < size2){
                nums[k] = nums2[j];
                j++;
                k++;
            }
        }

        // Calculate the median based on the size of the combined array
        if (size % 2 != 0){         
            median = nums[((size+1)/2)-1] / 1.0;
        }
        else{
            median = (nums[((size)/2)-1] + nums [(size/2)]) / 2.0;
        }
        return median;
    }
};
