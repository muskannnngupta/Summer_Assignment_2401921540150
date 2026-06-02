#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = INT_MIN;
        int j = 0;
        int sum = 0;
        int n = nums.size();
        while (j < n) {

            sum += nums[j];
            if (sum > maxSum) {
                maxSum = sum;

            } 
             if(sum < 0){
                sum = 0;
            }

            j++;
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;
    int ans = obj.maxSubArray(nums);

    cout << ans;
    return 0;
}