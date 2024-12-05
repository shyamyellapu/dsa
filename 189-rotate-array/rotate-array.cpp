class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size(); // Get the size of the array
        k = k % n; // Handle cases where k > n
        
        // Create a temporary vector to store the rotated elements
        vector<int> temp(n);

        // Fill the temporary array with rotated values
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        // Copy the rotated values back into the original array
        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }

        // Print the rotated array
        for (auto it : nums) {
            cout << it << " ";
        }
    }
};