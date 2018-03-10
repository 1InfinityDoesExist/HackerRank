#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int SockMerchant(vector<int> &A);
};
Solution::Solution(){}
int Solution::SockMerchant(vector<int> &A)
{
    int count (0);
    map<int, int> mp;
    for(vector<int>::iterator iter = A.begin(); iter != A.end(); iter++)
    {
        mp[*iter]++;
        if(mp[*iter]%2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    vector<int> A;
    for(int iter = 0; iter < n; iter++)
    {
        int data;
        cin >> data;
        A.push_back(data);
    }
    int ans = sol.SockMerchant(A);
    cout << ans << endl;
    return 0;
}
