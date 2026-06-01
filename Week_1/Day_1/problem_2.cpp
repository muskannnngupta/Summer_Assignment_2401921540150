#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        int j = i + 1;
        int n = nums.size();

        while (j < n) {

            if (nums[j] != nums[i]) {
                swap(nums[j], nums[i+1]);
                i++;
            }
            j++;
        }
        return i+1;
    }
};