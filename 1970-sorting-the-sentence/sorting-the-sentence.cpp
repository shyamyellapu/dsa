class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);  // To store the words in their correct positions
        string temp;
        int index = 0;
        
        while (index < s.size()) {
            if (s[index] == ' ') {
                int pos = temp[temp.size() - 1] - '0';  // Get the position of the word
                temp.pop_back();  // Remove the digit from the word
                ans[pos - 1] = temp;  // Place the word in the correct position
                temp.clear();  // Clear temp for the next word
            } else {
                temp += s[index];  // Add character to the current word
            }
            index++;
        }

        // Last word processing (since it won't end with a space)
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos - 1] = temp;
        
        // Combine all words into a single string with spaces
        string result;
        for (int i = 0; i < ans.size(); ++i) {
            if (!ans[i].empty()) {
                if (!result.empty()) result += " ";
                result += ans[i];
            }
        }
        return result;
    }
};
