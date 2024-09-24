class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
       int count = 0;
    vector<bool> visited(s.size(), false); // To keep track of paired strings

    for (int i = 0; i < s.size(); i++) {
        if (visited[i]) continue; // Skip if already counted
        string st = s[i];

        for (int j = i + 1; j < s.size(); j++) {
            if (visited[j]) continue; // Skip if already counted
            string st2 = s[j];
            reverse(st2.begin(), st2.end());

            if (st == st2) {
                count++;
                visited[i] = visited[j] = true; // Mark both strings as counted
                break;
            }
        }
    }

    return count;}}
;