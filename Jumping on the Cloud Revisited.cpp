#include <bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    public:
        Solution();
        int jumpingOnClouds(vector<int> A, const int k);
};
Solution::Solution(){}
int Solution::jumpingOnClouds(vector<int> A, const int k)
{
    int eng (100);
    // Complete this function
    if(A.size() == 1)
    {
        return 0;
    }
    for(int iter = 0; iter < A.size(); iter++)
    {
        if(A[iter] == 0)
        {
            eng = eng - 1;
            iter = iter + k-1;
            continue;
        }
        eng = eng - 3;
        iter = iter + k-1;
    }
    return eng;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++)
    {
       cin >> c[c_i];
    }
    int result = sol.jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
