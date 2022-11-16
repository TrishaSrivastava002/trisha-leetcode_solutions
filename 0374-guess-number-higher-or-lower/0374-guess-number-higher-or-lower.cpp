/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        while(guess(n)!=0){
             if(guess(n)== -1)
            n--;
        else if(guessNumber(n)== 1)
               n++;
        }
       
        
        return n; 
    }
};