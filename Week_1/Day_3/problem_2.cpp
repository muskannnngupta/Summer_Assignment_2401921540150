#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        int left = 0;
        int right = n - 1;

        vector<int> ans(n);

        for (int index = n - 1; index >= 0; index--) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[index] = nums[left] * nums[left];
                left++;
            } else {
                ans[index] = nums[right] * nums[right];
                right--;
            }
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};

    Solution obj;
    vector<int> ans = obj.sortedSquares(nums);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}