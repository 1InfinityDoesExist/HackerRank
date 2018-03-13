#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void fairRations(vector<int> &A);
};
Solution::Solution(){}
void Solution::fairRations(vector<int> &A)
{
    int summation = accumulate(A.begin(), A.end(), 0);
    if(summation%2 == 1)
    {
        cout << "NO" <<endl;
    }
    else
    {
        int count (0);
        for(int iter = 0; iter < A.size(); iter++)
        {
            if(A[iter]%2 != 0)
            {
                A[iter] = A[iter]+1;
                A[iter+1] = A[iter+1] +1;
                count = count + 2;
            }
        }
        cout << count << endl;
    }
    return;
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
    sol.fairRations(A);
   return 0;
}
