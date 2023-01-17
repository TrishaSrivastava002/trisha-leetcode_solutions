The problem becomes easier when we think about these expressions as expression trees.
We can traverse over the experssion and whenever we encounter an operator, we recursively divide the expression into left and right part and evaluate them seperately until we reach a situation where our expression is purely a number and in this case we can simply return that number.
Since there can be multiple ways to evaluate an expression (depending on which operator you take first) we will get a list of reults from left and the right part.
Now that we have all the possible results from the left and the right part, we can use them to find out all the possible results for the current operator.!
​
https://leetcode.com/problems/different-ways-to-add-parentheses/discuss/1294189/Easy-Solution-Faster-than-100-or-Explained-With-Diagrams