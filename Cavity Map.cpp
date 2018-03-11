#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        vector<vector<char>> cavityMap(vector<vector<char>> &A);
};
Solution::Solution(){}

vector<vector<char>> Solution::cavityMap(vector<vector<char>> &A)
{
    for(int iter = 1; iter < A.size()-1; iter++)
    {
        for(int jter = 1; jter < A.size()-1; jter++)
        {
            if((A[iter][jter] -'0') > (A[iter-1][jter] - '0') && (A[iter][jter] -'0') > (A[iter][jter-1] - '0') && (A[iter][jter] -'0') > (A[iter][jter+1] - '0') && (A[iter][jter] -'0') > (A[iter+1][jter] - '0'))
            {
                A[iter][jter] = 'X';
            }
        }
    }
    return A;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    vector<vector<char>> A;
    for(int iter = 0; iter < n ;iter++)
    {
        vector<char> temp;
        for(int jter = 0; jter < n; jter++)
        {
            char ch;
            cin >> ch;
            temp.push_back(ch);
        }
        A.push_back(temp);
    }
    vector<vector<char>> ans = sol.cavityMap(A);
    for(vector<vector<char>>::iterator iter = ans.begin(); iter != ans.end(); iter++)
    {
        for(vector<char>::iterator jter = iter->begin(); jter != iter->end(); jter++)
        {
            cout << *jter;
        }
        cout << endl;
    }
    return 0;
}
