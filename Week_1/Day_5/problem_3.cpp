#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size() -1];
        string ans = "";

        for(int i = 0 ; i < first.size() ; i++){
            if(first[i] == last[i]) ans+= first[i];
            else break;
        }
        return ans;

        
    }
};

int main() {
    vector<string> strs = {"monkey", "money", "monster"};
    Solution obj;
    string ans = obj.longestCommonPrefix(strs);
    cout << ans << endl;
    return 0;
}