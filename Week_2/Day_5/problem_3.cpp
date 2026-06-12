#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome( const string& s, int left, int right) {
        while (left <= right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {

        int n = s.size();
        string res = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                if (isPalindrome(s, i, j)) {

                    string ans = s.substr(i, j - i + 1);

                    if (res.size() < ans.size()) {
                        res = ans;
                    }
                }
            }
        }
        return res;
    }
};
int main(){
    string s;
    getline(cin,s);
    Solution obj;
    string ans = obj.longestPalindrome(s);
    cout<<ans;
}