//9. Palindrome Number
/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

public class Solution {
    public bool IsPalindrome(int x) {
        string str = x.ToString();
        if (str.Length == 1) {
            return true;
        }
        int i = 0;
        int j = str.Length - 1;
        while (i < str.Length && j >= 0) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
