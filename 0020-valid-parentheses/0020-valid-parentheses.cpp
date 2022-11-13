class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c);
            }
            else {
                if (stack.size() == 0) {
                    return false;
                }
                
                char top = stack.top();
                // ( = 40, ) = 41, [ = 91, ] = 93, { = 123, } = 125
                if(top + 1 == c || top + 2 == c) {
                    stack.pop();
                }
                else {
                    return false;
                }
            }
        }
        
        return stack.empty();
    }
};