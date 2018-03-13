#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int colorSort(string str);
};
Solution::Solution(){}
int Solution::colorSort(string str)
{
    if(count(str.begin(), str.end(),str[0]) == str.length() && str[0] == '_')
    {
        return 1;
    }
    if((str[0] != '_' && str.length() == 1))
    {
        return false;
    }
    if(find(str.begin(), str.end(), '_') == str.end())
    {
        int iter (0);
        int count (1);
        while(iter < str.length()-1)
        {
            if(str[iter] == str[iter+1])
            {
                iter++;
                count++;
                continue;
            }
            if(count == 1)
            {
                return false;
            }

            iter++;
            count = 1;
            if(iter == str.length()-1 && count == 1)
            {
                return false;
            }
        }
        return true;
    }
    map<char, int> mp;
    for(string::iterator iter = str.begin(); iter != str.end(); iter++)
    {
        mp[*iter]++;
    }
    for(map<char, int>::iterator iter = mp.begin(); iter != mp.end(); iter++)
    {
        if(iter->second == 1 && iter->first != '_')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = sol.colorSort(str);
        if(ans == 1)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
