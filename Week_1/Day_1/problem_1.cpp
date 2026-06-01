#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mpp;
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int num = nums[i];
            int targetnum = target - num;

            if (mpp.find(targetnum) != mpp.end()) {

                return {i, mpp[targetnum]};
            }

            mpp[num] = i;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    Solution obj;
    vector<int> ans = obj.twoSum(nums, target);

    cout << ans[0] << " " << ans[1];
    return 0;
}