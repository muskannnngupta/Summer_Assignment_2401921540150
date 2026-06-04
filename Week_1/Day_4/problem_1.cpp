#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int sum = 0;

        for(int i = 0 ; i<n ; i++){
            sum = sum + mat[i][i];
            sum = sum + mat[i][n-i-1];
        }
        if(n%2 == 1){
            sum =sum - mat[n/2][n/2];
        }
        return sum;
    }
};
int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Solution obj;
    int ans = obj.diagonalSum(mat);

    cout << ans;
    return 0;
}