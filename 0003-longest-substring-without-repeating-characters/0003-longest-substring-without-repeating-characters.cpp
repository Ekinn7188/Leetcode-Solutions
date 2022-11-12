class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        unordered_set<char> set;
        
        for (int i = 0; i < s.size(); i++) {    
            for (int j = i; j < s.size(); j++) {
                if(!set.insert(s[j]).second) {
                    if (set.size() > longest) {
                        longest = set.size();
                    }
                    set.clear();
                    break;
                }
            }
            if (set.size() == s.size()-i && longest < set.size()) {
                longest = set.size();
            }
        }
        
        return longest;
    }
};