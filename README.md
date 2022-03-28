# Data Struct (Week-6 Forum)
Class : L2BC <br />
Group 2 : Binary To Decimal Conversion <br />
Members : <br />
* Joshua Alexander (2502005244)
* Kimberly Mazel (2502022250)
* Maria Clarin (2501990331)

## Explanation
Since the base case is a problem that we already know the answer to, we used an if statement that returns 0 if the quotient/number is <=0. When the operation reaches the quotient 0, it should stop the recursion as there is no longer any value to divide 2 with. This stops the function from being called again. 

The general case is the else part of the statement which is the formula of the conversion. To find the binary number from a decimal, it is the remainders of the quotients after each division by 2, in order from the last to the first operation.
