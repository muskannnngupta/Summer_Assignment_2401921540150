#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeString(string s)
    {

        int i = 0;
        return solve(s, i);
    }
    string solve(string &s, int &i)
    {
        string ans = "";
        int num = 0;

        while (i < s.size() && s[i] != ']')
        {
            if (isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
            }
            else if (isalpha(s[i]))
            {
                ans += s[i];
            }
            else if (s[i] == '[')
            {
                i++;
                string inner = solve(s, i);
                for (int k = 0; k < num; k++)
                {
                    ans += inner;
                }
                num = 0;
            }
            i++;
        }
        return ans;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    string ans = obj.decodeString(s);
    cout << ans;
}