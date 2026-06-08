#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> mpp;

        for (char ch : magazine) {
            mpp[ch]++;
        }
        for (char ch : ransomNote) {
            if (mpp[ch] == 0)
                return false;
            mpp[ch]--;
        }
        return true;
    }
};
int main(){

    string ransomNote,magazine;
    cin>>ransomNote;
    cin>>magazine;
    Solution obj;
    bool ans = obj.canConstruct(ransomNote,magazine);
    cout<<ans;

}