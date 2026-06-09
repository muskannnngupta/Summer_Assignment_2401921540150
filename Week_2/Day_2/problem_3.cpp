#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if(k>n) return ans;
        vector<int> freqs(26,0);
        vector<int> freqp(26,0);

        for(char ch : p){
            freqp[ch - 'a']++;
        }

        for(int i = 0 ; i<k ; i++){
            freqs[s[i] - 'a']++;
        }

        if(freqp == freqs){
            ans.push_back(0);
        }

        for(int i = k ; i<n ; i++){
            freqs[s[i] - 'a']++;
            freqs[s[i-k] - 'a']--;

            if(freqs == freqp){
                ans.push_back(i-k+1);
            }
        }
    return ans;    
    }
};
int main(){
    string s,p;
    cin>> s;
    cin>>p;
    Solution obj;
    vector<int> ans = obj.findAnagrams(s,p);
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]+" ";
    }
}