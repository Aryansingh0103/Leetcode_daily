#include <iostream>
using namespace std;

class Solution{
    public:
int SubtractProductandSum(int n){
int prod =1;
int sum = 0;
while (n!=0)
{
    int digit = n % 10;
    prod = prod * digit;
    sum = sum + digit;
    n =n / 10;
}
int ans = prod - sum;
return ans;
}
};
int main(){
    int n;
    cout<< "Enter the number of your choice " <<endl;
    cin>>n;
     Solution sol;
    int result = sol.SubtractProductandSum(n);

    cout << "The result of subtracting the sum from the product of the digits is: " << result << endl;

    return 0;
}