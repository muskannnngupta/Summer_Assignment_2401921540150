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