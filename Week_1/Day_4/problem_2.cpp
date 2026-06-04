#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int oriRow = mat.size();
        int oriCol = mat[0].size();

        if((oriRow*oriCol) != r*c) return mat;

        vector<vector<int>> ans(r,vector<int>(c));
        int row = 0;
        int col = 0;

        for(int i = 0; i < oriRow; i++){
            for(int j = 0 ; j < oriCol ; j++){

                ans[row][col] = mat[i][j];
                col++;

                if(col == c){
                    col = 0;
                    row++;
                }

            }
        }
        return ans;
        
    }
};

int main() {
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1;
    int c = 4;

    Solution obj;
    vector<vector<int>> ans = obj.matrixReshape(mat, r, c);

    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ; j < ans[0].size() ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}