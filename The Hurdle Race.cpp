#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
    int hurdleRace(vector<int> A, int k);
};
Solution::Solution(){}
int Solution::hurdleRace(vector<int> A, int k)
{
    int count (0);
    sort(A.begin(), A.end(), greater<int>());
    for(int iter = 0; iter < A.size(); iter++)
    {
        if(A[iter] > k)
        {
            count = count + abs(A[iter]-k);
            k = A[iter];
            continue;
        }
        break;
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
    int k;
    cin >> k;
    vector<int> A;
    for(int iter = 0; iter < n ;iter++)
    {
        int data;
        cin >> data;
        A.push_back(data);
    }
    int ans = sol.hurdleRace(A, k);
    cout << ans <<endl;
    return 0;
}
