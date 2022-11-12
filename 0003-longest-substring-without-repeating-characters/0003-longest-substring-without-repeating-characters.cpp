class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        unordered_set<char> set;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            while (!set.insert(s[right]).second) {
                set.erase(s[left]);
                left++;
            }
            length = max(length, right-left+1);
        }
        
        return length;
    }
};