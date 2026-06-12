#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        unordered_map<string,vector<string>> mpp;

        for(string str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(str);
        }

        vector<vector<string>> ans;

        for(auto it : mpp){
            ans.push_back(it.second);
        }


    return ans;    
    }
};
int main(){

    vector<string> strs = {"eat","bat","tea","tan","nat"};
    Solution obj;
    vector<vector<string>> ans = obj.groupAnagrams(strs);
     for (auto group : ans) {
        cout << "[ ";
        for (auto str : group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;

}