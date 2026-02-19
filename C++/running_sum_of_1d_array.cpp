//1480. Running Sum of 1d Array
#include <vector>
using namespace std;

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