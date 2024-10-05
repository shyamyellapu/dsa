class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int big = -1;   // To store the maximum distance
        int j = 0;      // Starting index (compare nums[j] with nums[i])
        
        // Iterate through the array to find the maximum distance from the start
        for (int i = 1; i < nums.size(); i++) {
            // If the current element is different from the element at index j
            if (nums[j] != nums[i]) {
                big = max(big, i);  // Update maximum distance
            }
        }

        // Compare the last element with earlier elements
        j = nums.size() - 1;  // Set j to point to the last element
        for (int i = nums.size() - 2; i >= 0; i--) {
            // If the current element is different from the element at index j
            if (nums[j] != nums[i]) {
                big = max(big, j - i);  // Update maximum distance
            }
        }
        
        return big;  // Return the maximum distance
    }
};
