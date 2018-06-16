#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void sorting(vector<int> &A);
};
Solution::Solution(){}
void Solution::sorting(vector<int> &A)
{
    sort(A.begin(), A.end());
    for(vector<int>::iterator iter = A.begin(); iter != A.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return;
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
    sol.sorting(A);
    return 0;
}
