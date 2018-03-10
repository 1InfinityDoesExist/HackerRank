#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        pair<int, int> breakingRecords(vector<int> &A);
};
Solution::Solution(){}
pair<int, int> Solution::breakingRecords(vector<int> &A)
{
    int len = A.size();
    vector<int> left;
    left.push_back(A[0]);
    for(int iter = 1; iter < A.size(); iter++)
    {
        if(left[iter-1] >= A[iter])
        {
            left.push_back(left[iter-1]);
        }
        else
        {
            left.push_back(A[iter]);
        }
    }

    left.erase(unique(left.begin(), left.end()), left.end());
    int x = left.size()-1;
    vector<int> right;

    right.push_back(A[0]);
    for(int iter = 1; iter < A.size(); iter++)
    {
        if(right[iter-1] >= A[iter])
        {
            right.push_back(A[iter]);
        }
        else
        {
            right.push_back(right[iter-1]);
        }
    }

    right.erase(unique(right.begin(), right.end()), right.end());
    int y = right.size()-1;
    pair<int, int> ans = make_pair(x, y);
    return ans;
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
    pair<int, int> ans = sol.breakingRecords(A);
    cout << ans.first << " "<< ans.second << endl;
    return 0;
}
