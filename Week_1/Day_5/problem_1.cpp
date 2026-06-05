#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

       int n = s.size();
       int left = 0;
       int right = n-1;

       while( left < right){    
      
        while(left<right && !isalnum(s[left])){
            left++;

        }
        while(left<right && !isalnum(s[right])){
            right--;
        }

        char ch1 = tolower(s[left]);
        char ch2 = tolower(s[right]);

        if(ch1 != ch2) return false;

        left++;
        right--;

       }

    return true;
        
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";        
    Solution obj;
    bool ans = obj.isPalindrome(s);
    cout << ans << endl;
    return 0;
}