#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        string appendAndDelete(string s, string t, int k);
};
Solution::Solution(){}
int min(int a, int b)
{
    return a < b ? a : b;
}
string Solution::appendAndDelete(string s, string t, int k)
{

    string ss = s;
    string tt = t;
    sort(ss.begin(), ss.end());
    sort(tt.begin(), tt.end());
    ss.erase(unique(ss.begin(), ss.end()), ss.end());
    tt.erase(unique(tt.begin(), tt.end()), tt.end());
    if(ss.length() == tt.length() && ss == tt)
    {
        return "Yes";
    }
    int len_s = s.length();
    int len_t = t.length();
    if(len_t > len_s)
    {
        return "No";
    }
    int len = min(len_s, len_t);
    string::size_type iter = 0;
    while(iter < len)
    {
        if(s[iter] != t[iter])
        {
            break;
        }
        iter++;
    }

    int s_rem = len_s - iter;
    int t_rem = len_t - iter;
    if(s_rem + t_rem <= k)
    {
        return "Yes";
    }
    return "No";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    string result = sol.appendAndDelete(s, t, k);
    cout << result << endl;
    return 0;
}
