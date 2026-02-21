//1342. Number of Steps to Reduce a Number to Zero
/*
Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                num /= 2;
            }
            /*Bitwise solution
            if ((num & 1) == 0) { //& is the bitwise AND operator, checking if the least significant bit is 0 (even)
                num >>= 1; //>> shifts bits to the right, effectively dividing by 2
            }
            */
            else {
                num--;
            }
            steps++;
        }
        return steps;
    }
};