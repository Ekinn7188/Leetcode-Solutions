class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> r{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int val = 0;

        for (int i = 0 ; i < s.length(); i++) {
            if (r[s[i+1]] <= r[s[i]]) {
                val += (r[s[i]]);
            }
            // All values in the function are valid numerals. No need to check if subtraction is done correctly.
            else {
                val -= (r[s[i]]);
            }
        }

        return val;
    }
};