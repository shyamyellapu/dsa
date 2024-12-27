class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> ansrow; // Resultant row
        long long ans = 1;  // Initial value for the first element of the row
        
        // First element is always 1
        ansrow.push_back(1);
        
        for (int i = 1; i <= rowIndex; i++) {
            ans = ans * (rowIndex - i + 1) / i; // Compute the next element using combinatorics
            ansrow.push_back(ans);
        }
        
        return ansrow;
    }
};