class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int big = -1;           // To store the maximum difference
        int j = 0;              // Initialize j to track the minimum element
        int n = nums.size();     // Get the size of the vector
        
        for (int i = 1; i < n; i++) {
            // Only calculate the difference if nums[i] is greater than nums[j]
            if (nums[i] > nums[j]) {
                big = max(big, nums[i] - nums[j]);  // Update maximum difference
            } else {
                // Update j to point to the new minimum element
                j = i;
            }
        }
        return big;
    }
};