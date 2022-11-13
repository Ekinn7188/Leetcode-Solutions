**Modulo/Division approach:**
​
x = 1234321
​
get x size from std::to_string(x).length()
​
repeat i from 1 to (x/2 rounded up + 1)
​
the +1 is to account for 2 digit numbers
​
// x % 10^i / 10^(i-1) = 1
// x / 10^(size-i) % 10 = 1 (integer division)
​
if all of the numbers are the same, then it's a palindrome
​