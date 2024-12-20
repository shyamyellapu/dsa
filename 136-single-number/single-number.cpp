class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Sort the array
        sort(nums.begin(), nums.end());

        // Traverse the array in pairs
        for (int i = 0; i < nums.size() - 1; i += 2) {
            // If a pair is not equal, the single number is found
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        // If no unmatched pair is found, the single number is the last element
        return nums.back();
    }
};
