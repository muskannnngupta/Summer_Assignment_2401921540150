#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        int start = 0;
        int n = s.size();
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                reverseWord(s, start, i - 1);
                start = i + 1;
            }
        }
        return s;
    }

    void reverseWord(string& s, int left, int right) {
        if (left >= right)
            return;
        swap(s[left], s[right]);
        reverseWord(s, left + 1, right - 1);
    }
};
int main(){
    string s;
    getline(cin,s);
    Solution obj;
    string ans = obj.reverseWords(s);
    cout<<ans;

}