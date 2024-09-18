/* 
179. Largest Number
Solved
Medium
Topics
Companies
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 109
*/


bool compare(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);

    if((sa + sb )> (sb + sa)){
        return true;
    }
    return false;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);

        if (nums[0] == 0) {
            return "0";
        }

        string ans = "";
        for (int num : nums) {
            ans += to_string(num);
        }

        return ans;
    }
};
