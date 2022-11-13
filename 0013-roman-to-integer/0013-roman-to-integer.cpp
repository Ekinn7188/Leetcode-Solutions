class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> r;

        r['M'] = 1000;
        r['D'] = 500;
        r['C'] = 100;
        r['L'] = 50;
        r['X'] = 10;
        r['V'] = 5;
        r['I'] = 1;

        int val = 0;
        int sub = 0;

        for (int i = 0 ; i < s.length(); i++) {
            char next = s[i+1];

            if (i == s.length() - 1 || r[next] <= r[s[i]]) {
                val += (r[s[i]]-sub);
                sub = 0;
                continue;
            }

            if (s[i] == 'I' || s[i] == 'X' || s[i] == 'C') {
                auto it = r.find(s[i]);
                char one_ahead = (++it)->first;
                char two_ahead = (++it)->first;
                if (next == one_ahead || next == two_ahead) {
                    sub = r[s[i]];
                }
            }
        }

        return val;
    }
};