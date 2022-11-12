**When l1 and l2 have size of 3:**
l1: [c] -> [b] -> [a]
l2: [f] -> [e] -> [d]

let p = previous node before the modulo

solution: 
[(f+c)%10] -> <br>
[**(** (p - p%10)/10 + (b+e) **)** % 10] -> <br>
[**(** (p - p%10)/10 + (a+d) **)** % 10] -> <br>
[(p - p%10)/10] <br>

-----------------------------------------------------

**When l1 and l2 have size of n:**
l1: [a<sub>1</sub>] -> [a<sub>2</sub>] -> ... -> [a<sub>n</sub>]
l2: [b<sub>1</sub>] -> [b<sub>2</sub>] -> ... -> [b<sub>n</sub>]

p = previous node before modulo

solution:
[(a<sub>1</sub>+b<sub>1</sub>) % 10] -> <br>
[((p - p%10)/10 + (a<sub>2</sub>+b<sub>2</sub>)) % 10] -> <br>
[((p - p%10)/10 + (a<sub>3</sub>+b<sub>3</sub>)) % 10] -> <br>
... <br>
[((p - p%10)/10 + (a<sub>n</sub>+b<sub>n</sub>)) % 10] -> <br>
[(p - p%10)/10] <br>

-----------------------------------------------------

**When l1 has size n and l2 has size m**
l1: [a<sub>1</sub>] -> [a<sub>2</sub>] -> ... -> [a<sub>n</sub>]
l2: [b<sub>1</sub>] -> [b<sub>2</sub>] -> ... -> [b<sub>m</sub>]

p = previous node before modulo

solution:
[(a<sub>1</sub>+b<sub>1</sub>) % 10] -> <br>
[((p - p%10)/10 + (a<sub>2</sub>+b<sub>2</sub>)) % 10] -> <br>
... *continue until end of l1 or l2 has been hit. let's say that n<m.* ... <br>
[((p - p%10)/10 + (a<sub>n</sub>+b<sub>n</sub>)) % 10] -> <br>
[(p - p%10)/10 + b<sub>n+1</sub>]  -> <br>
[(p - p%10)/10 + b<sub>n+2</sub>]  -> <br>
... *until the end of l2 has been reached* ... <br>
[(p - p%10)/10 + b<sub>m</sub>]  -> <br>
[(p - p%10)/10]
