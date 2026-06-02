#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;
        for(int num : nums){
            if(st.find(num) != st.end()){
                return true;
            }
            st.insert(num);
        }
        
        return false;
        
    }
};

int main() {
    vector<int> nums = {1, 2, 3};

    Solution obj;
    bool ans = obj.containsDuplicate(nums);

    cout << ans;
    return 0;
}