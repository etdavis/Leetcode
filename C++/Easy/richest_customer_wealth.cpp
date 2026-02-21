#include<vector>
using namespace std;

//1672. Richest Customer Wealth
/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int total_wealth= 0;
        for (const auto& customer : accounts) {
            total_wealth = 0;
            for (int account : customer) {
                total_wealth += account;
            }
            if (total_wealth > max_wealth) {
                max_wealth = total_wealth;
            }
        }
        return max_wealth;
    }
};