#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.size();
        int len = 1;
        while (len <= n / 2) {

            if (n % len != 0) {
                len++;
                continue;
            }

            string stringlen = "";

            for (int i = 0; i < len; i++) {
                stringlen += s[i];
            }

            string ans = "";

            while (ans.size() < s.size()) {
                ans += stringlen;
            }

            if (ans == s) {
                return true;
            }
            len++;
        }
        return false;
    }
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    bool ans = obj.repeatedSubstringPattern(s);
    cout<<ans;

}