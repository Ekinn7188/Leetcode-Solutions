class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string solution = "";
        
        bool areEqual = true;
        
        for (int i = solution.length(); areEqual; i = solution.length()) {
            for (int j = 0; j < strs.size(); j++) {
                string s = strs[j];
                
                if (j != 0 && s[i] != strs[j-1][i]) {
                    areEqual = false;
                    break;
                }
            }
            
            if (areEqual) {
                try {
                    solution += strs[0].at(i);
                } catch (out_of_range e) {
                    break;
                }
            }
        }
        
        return solution;
    }
};