#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void printMax(vector<int> &A);
};
Solution::Solution(){}
void Solution::printMax(vector<int> &A)
{
    cout << *max_element(A.begin(), A.end()) <<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> v;
    for(int iter = 0; iter < 4; iter++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    sol.printMax(v);
    return 0;
}
