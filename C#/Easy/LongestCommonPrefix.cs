// 14. Longest Common Prefix
/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        int min = int.MaxValue;
        foreach (string str in strs) {
            if (str.Length < min) {
                min = str.Length;
            }
        }
        string result = "";
        int count = 0;
        for (int i = 0; i < min; i++) {
            var letter = strs[0][i];
            foreach (string str in strs) {
                if(str[count] != letter) {
                    return result;
                }
            }
            count++;
            result += letter;
        }
        return result;
    }
}