#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {


        int n = chars.size();
        int i = 0;
        string res = "";
        while(i<n){
             
            int index = i;
            char ch = chars[i];
            res += ch;
            int count = 1;

            while( i + 1 < n && chars[i + 1] == ch){
                count++;
                i++;
            }
            if(count > 1){

                res += to_string(count);
               
            }

            i++;

        }
        
        for (int j = 0; j < res.size(); j++) {
            chars[j] = res[j];
        }


    return res.size();
        
    }
};

int main(){
    vector<char> chars = {'a','a','a','b', 'c','c','c','c', 'c','c','c','c', 'c','c','c','c'};
    Solution obj;
    int ans = obj.compress(chars);
    for(int i = 0 ; i < ans ; i++){
        cout<<chars[i]<<" ";
    }
}