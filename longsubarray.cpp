/*
Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. 
Return 0 if there is no such subarray.
Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
*/
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int maxCount = 0;
        int count = 0;
        int prevCount = 0;
        bool hasZero = false;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                prevCount++;
                maxCount = max(maxCount, count);
            } else {
                hasZero = true;
                count = prevCount;
                prevCount = 0;
            }
        }

        if (!hasZero)
            return maxCount - 1;

        return maxCount;
    } 
    
};
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 0, 1};

    int longest = solution.longestSubarray(nums);

    cout << "Size of the longest subarray with only 1's: " << longest << endl;

    return 0;
}