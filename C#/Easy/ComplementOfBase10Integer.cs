//1009. Complement of Base 10 Integer
/*The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.
*/

public class Solution {
    public int BitwiseComplement(int n) {
        //int to binary string
        string binaryString = Convert.ToString(n, 2);

        //flip binary string
        string binaryComplement = "";
        for (int i = 0; i < binaryString.Length; i++) {
            if (binaryString[i] == '0') {
                binaryComplement += '1';
            }
            else {
                binaryComplement += '0';
            }
        }
        
        //binary string to int
        int decimalComplement = Convert.ToInt32(binaryComplement, 2);

        return decimalComplement;
    }
}
