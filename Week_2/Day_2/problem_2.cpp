#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if( n > m) return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        int k = s1.size();

        for(char ch : s1){
            freq1[ch - 'a']++;
        }
        for(int i = 0 ; i < k ; i++){
            freq2[s2[i]-'a']++;
        }
        if(freq1 == freq2) return true;

        for(int i = s1.size() ; i<m ; i++){
            
            freq2[s2[i] - 'a']++;
            freq2[s2[i-k] - 'a']--;

            if(freq1 == freq2) return true;

        }
         
        return false;


    }
};
int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;
    Solution obj;
    bool ans = obj.checkInclusion(s1,s2);
    cout<<ans;
    
}