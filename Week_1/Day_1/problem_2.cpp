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

int main() {
    vector<int> nums = {1, 1, 2,2,3,4,4};

    Solution obj;
    int ans = obj.removeDuplicates(nums);
    for (int i = 0; i < ans; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << ans;
    return 0;
}