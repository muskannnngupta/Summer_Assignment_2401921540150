#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxarea = 0;

        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            maxarea = max(area, maxarea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
};
    
int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution obj;
    int ans = obj.maxArea(height);

    cout << ans;
    return 0;
}