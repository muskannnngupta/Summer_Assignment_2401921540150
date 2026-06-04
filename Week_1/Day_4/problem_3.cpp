#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int rowend = matrix.size() - 1;
        int colend = matrix[0].size() - 1;
        int rowstart = 0;
        int colstart = 0;

        vector<int> ans;

        while (rowstart <= rowend && colstart <= colend) {

            for (int i = colstart; i <= colend; i++) {
                ans.push_back(matrix[rowstart][i]);
            }
            rowstart++;

            for (int i = rowstart; i <= rowend; i++) {
                ans.push_back(matrix[i][colend]);
            }

            colend--;

            if (rowstart <= rowend) {

                for (int i = colend; i >= colstart; i--) {
                    ans.push_back(matrix[rowend][i]);
                }

                rowend--;
            }

            if (colstart <= colend) {

                for (int i = rowend; i >= rowstart; i--) {
                    ans.push_back(matrix[i][colstart]);
                }

                colstart++;
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Solution obj;
    vector<int> ans = obj.spiralOrder(matrix);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}