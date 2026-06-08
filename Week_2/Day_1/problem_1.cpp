#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        unordered_map<char,int> mpp;

        for(char ch : s){
            mpp[ch]++;
        }
        for(char ch : t){
            if(mpp[ch] == 0) return false;
            mpp[ch]--;
        }
        return true;
        
    }
};

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    Solution obj;
    bool ans = obj.isAnagram(s,t);
    cout<<ans;
    return 0;
}