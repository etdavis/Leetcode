#include<vector>
#include<string>
using namespace std;

//412. Fizz Buzz
/*
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        
        for (int i = 0; i < n; i++) {
            answer.push_back("");
            if ((i + 1) % 3 == 0) {
                answer[i] += "Fizz";
            }
            if ((i + 1) % 5 == 0) {
                answer[i] += "Buzz";
            }
            if (answer[i] == "") {
                answer[i] += to_string(i + 1);
            }
        }
        return answer;
    }
};