#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {


        double windowsum = 0;
        double avg = 0;
        for(int i = 0 ; i <k ; i++){
            windowsum += nums[i];
        } 
        avg = windowsum/k;

        for(int right = k ; right < nums.size() ; right++){
            windowsum += nums[right] - nums[right-k];
            avg = max(avg,windowsum/k);
        }
        return avg;
     
        
    }
};

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    Solution obj;
    double ans = obj.findMaxAverage(nums, k);

    cout << ans;
    return 0;
}