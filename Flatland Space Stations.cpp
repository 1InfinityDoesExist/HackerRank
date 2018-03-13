#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int flatlandSpaceStations(const int n, vector<int> A);
};
Solution::Solution(){}
int max(int x, int y)
{
    return x > y ? x : y;
}
int Solution::flatlandSpaceStations(const int n, vector<int> A)
{
    if(n == A.size())
    {
        return 0;
    }

    sort(A.begin(), A.end());
    int mx = -99999;
    mx = max(mx, abs(0-A[0]));
    mx = max(mx, abs(n-1 -A[A.size()-1]));
    for(int iter = 1; iter < A.size() ;iter++)
    {
        mx = max(mx, (A[iter] - A[iter-1])/2);
    }
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0; c_i < m; c_i++)
    {
       cin >> c[c_i];
    }
    int result = sol.flatlandSpaceStations(n, c);
    cout << result << endl;
    return 0;
}
