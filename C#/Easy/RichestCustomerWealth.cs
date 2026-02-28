//1672. Richest Customer Wealth
/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

public class Solution {
    public int MaximumWealth(int[][] accounts) {
        int maxWealth = 0;
        foreach (int[] customer in accounts) {
            int wealth = 0;
            foreach (int bank in customer) {
                wealth += bank;
            }
            if (wealth > maxWealth) {
                maxWealth = wealth;
            }
        }
        return maxWealth;
    }
}