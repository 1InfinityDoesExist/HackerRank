#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int aloneInCouple(vector<int> &A);
};
Solution::Solution(){}
int Solution::aloneInCouple(vector<int> &A)
{
    map<int, int> mp;
    for(int iter = 0; iter < A.size(); iter++)
    {
        mp[A[iter]]++;
    }
    for(map<int, int>::iterator iter = mp.begin(); iter != mp.end(); iter++)
    {
        if((iter->second)%2 != 0)
        {
            return iter->first;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
        cin >> n;
        vector<int> A;
        for(int iter = 0; iter < n ;iter++)
        {
            int data;
            cin >> data;
            A.push_back(data);
        }
        int ans = sol.aloneInCouple(A);
        cout << ans <<endl;

    return 0;
}
