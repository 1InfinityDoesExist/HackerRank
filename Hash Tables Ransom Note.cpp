#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int yesOrNo(map<string, int> &mp1, map<string, int> &mp2);
};
Solution::Solution(){}
int Solution::yesOrNo(map<string, int> &mp1, map<string, int> &mp2)
{
    int s = mp2.size();
    int count (0);
    for(map<string, int>::iterator iter = mp2.begin(); iter != mp2.end(); iter++)
    {
        count++;
        if(mp1.find(iter->first) == mp1.end())
        {
            return 0;
        }
        if(mp2[iter->first] > mp1[iter->first])
        {
            return 0;
        }
    }
    if(count != s)
    {
        return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int m ,n;
    cin >> m >> n;
    map<string, int> mp1;
    for(int iter = 0; iter < m ;iter++)
    {
        string data;
        cin >> data;
        mp1[data]++;
    }
    map<string, int> mp2;
    for(int iter = 0; iter < n ; iter++)
    {
        string data;
        cin >> data;
        mp2[data]++;
    }
    int ans = sol.yesOrNo(mp1, mp2);
    if(ans == 0)
    {
        cout << "No" <<endl;
    }
    else
    {
        cout << "Yes" <<endl;
    }
    return 0;
}
