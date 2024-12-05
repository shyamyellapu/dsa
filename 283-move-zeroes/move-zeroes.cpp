class Solution {
public:
    void moveZeroes(vector<int>& nums) {
 int j = 0; // Pointer for the next non-zero position

        // First pass: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Second pass: Fill the rest of the array with zeros
        for (int i = j; i < nums.size(); i++) {
            nums[i] = 0;
        }

        // Print the result (optional)
        for (auto it : nums) {
            cout << it << " ";
        }
    }
};