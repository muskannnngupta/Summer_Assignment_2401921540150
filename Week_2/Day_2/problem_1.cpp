#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxLength = 0;
        int left = 0;
        int n = s.size();
        int length = 0;
        unordered_map<char,int> mpp;

        for(int right = 0 ; right < n ; right++){

         while(mpp[s[right]] != 0){
            mpp.erase(s[left]);
            left++;
         }
         mpp[s[right]]++;
         maxLength = max(maxLength,right-left+1);

        }
    return maxLength;    
    }
};

int main(){

    string s;
    cin>>s;
    Solution obj;
    int ans = obj.lengthOfLongestSubstring(s);
    cout<<ans;
    return 0;

}