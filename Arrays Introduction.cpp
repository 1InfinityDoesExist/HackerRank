#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void reverseVector(vector<int> &v);
};
Solution::Solution(){}
void Solution::reverseVector(vector<int> &V)
{
    reverse(V.begin(), V.end());
    for(vector<int>::iterator iter = V.begin(); iter != V.end(); iter++)
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
    vector<int> v;
    for(int iter = 0; iter < n; iter++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    sol.reverseVector(v);
    return 0;
}
