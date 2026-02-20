#include <vector>
using namespace std;

//1480. Running Sum of 1d Array
/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums = {nums[0]};
        for (int i = 1; i < nums.size(); i++) {
            sums.push_back(sums[i - 1] + nums[i]);
        }
        return sums;
    }
};