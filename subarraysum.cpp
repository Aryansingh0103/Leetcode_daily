/*
Given an array of positive integers nums and a positive integer target, 
return the minimal length of a subarray
 whose sum is greater than or equal to target. 
 If there is no such subarray, return 0 instead.
 Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n=a.size();
		
        int i,j,sum, minlen=n+1;
        i=j=sum=0;
		
        while(j<n){
            sum+=a[j]; 
			
            while(i<=j && sum>=target){
                minlen = min(minlen,j-i+1);
                sum-=a[i]; 
                i++;
            }
			
            j++;
        }
        
        return (minlen==n+1 ? 0:minlen);
    }
};