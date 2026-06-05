#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        
       int n = s.size();
       int low = 0;
       int high = n-1;
       
       while(low <= high){

         swap(s[low],s[high]);
         low++;
         high--;
       }
     

    }
};

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution obj;
    obj.reverseString(s);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}