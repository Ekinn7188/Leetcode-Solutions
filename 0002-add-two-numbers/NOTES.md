**When l1 and l2 have size of 3:**
l1: [c] -> [b] -> [a]
l2: [f] -> [e] -> [d]
​
let p = previous node before the modulo
​
solution:
[(f+c)%10] ->
[**(** (p - p%10)/10 + (b+e) **)** % 10] - >
[**(** (p - p%10)/10 + (a+d) **)** % 10] ->
[(p - p%10)/10]
​
-----------------------------------------------------
​
**When l1 and l2 have size of n:**
l1: [a<sub>1</sub>] -> [a<sub>2</sub>] -> ... -> [a<sub>n</sub>]
l2: [b<sub>1</sub>] -> [b<sub>2</sub>] -> ... -> [b<sub>n</sub>]
​
p = previous node before modulo
​
solution:
[(a<sub>1</sub>+b<sub>1</sub>) % 10] ->
[((p - p%10)/10 + (a<sub>2</sub>+b<sub>2</sub>)) % 10] ->
[((p - p%10)/10 + (a<sub>3</sub>+b<sub>3</sub>)) % 10] ->
...
[((p - p%10)/10 + (a<sub>n</sub>+b<sub>n</sub>)) % 10] ->