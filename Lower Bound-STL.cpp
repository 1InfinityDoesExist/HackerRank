#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    public:
        Solution();
        void solveQuery(vector<int> A, const int n);
};
Solution::Solution(){}
void Solution::solveQuery(vector<int> A, const int n)
{
    vector<int>::iterator low = lower_bound(A.begin(), A.end(), n);
    if(A[low-A.begin()] == n)
    {
        cout << "Yes " << low - A.begin()+1 <<endl;
    }
    else{
        cout << "No " << low - A.begin()+1 << endl;
    }
}
int main() {
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
    int query;
    cin >> query;
    for(int iter = 0; iter < query; iter++)
    {
        int data;
        cin >> data;
        sol.solveQuery(A, data);
    }
    return 0;
}
