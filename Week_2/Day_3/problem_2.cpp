#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n = s.size();
        int m = t.size();

        if(n>m) return false;

        int i = 0,j=0;

        while(i < n && j < m){

            if(s[i] == t[j]){
                i++;
            }
            j++;

        }
        
        if(i == s.size()) return true;
        else return false;
        
    }
};
int main(){
    string s,t;
    cin>>s>>t;
    Solution obj;
    bool ans = obj.isSubsequence(s,t);
    cout<<ans;

}