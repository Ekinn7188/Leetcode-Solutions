class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        int size = to_string(x).length();
        
        bool isPalindrome = true;
        
        for (int i = 1; i < ceil(size/2.0) + 1 && isPalindrome; i++) {
            int right_num = x % static_cast<int>(pow(10,i)) / pow(10, i-1);
            int left_num = static_cast<int>(x/pow(10,size-i)) % 10;                     
            
            if (left_num != right_num) {
                isPalindrome = false;
            }
        }
        
        return isPalindrome;
        
    }
};