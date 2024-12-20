class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0; // XOR of all numbers from 0 to n
        int xor2 = 0; // XOR of all elements in the array

        // XOR all numbers from 0 to n
        for (int i = 0; i <= nums.size(); i++) {
            xor1 ^= i;
        }

        // XOR all elements in the array
        for (int num : nums) {
            xor2 ^= num;
        }

        // Missing number is the XOR of xor1 and xor2
        return xor1 ^ xor2;
    }
};
