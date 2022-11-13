class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int right = strs[0].length();
        
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < strs[i].length() && strs[i][j] == strs[0][j]) {
                j++;
            }
            right = min(right, j);
        }
        
        return strs[0].substr(0,right);
    }
};