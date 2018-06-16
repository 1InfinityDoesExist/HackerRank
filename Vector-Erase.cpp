#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void eraser(vector<long long int> &A, const long long int x, pair<long long int, long long int> &p);
};
Solution::Solution(){}
void Solution::eraser(vector<long long int> &A, const long long int x, pair<long long int, long long int> &p){

    A.erase(A.begin()+x-1);
    A.erase(A.begin()+p.first-1, A.begin()+(p.second-1));
    cout << A.size() << endl;
    for(vector<long long int>::iterator iter = A.begin(); iter != A.end(); iter++)
    {
        cout << *iter << " ";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    long long int n;
    cin >> n;
    vector<long long int> A;
    for(int iter = 0; iter < n; iter++)
    {
        long long int data;
        cin >> data;
        A.push_back(data);
    }
    long long int x;
    cin >> x;

    long long int from , to;
    cin >> from >> to;
    pair<long long int, long long int> p = make_pair(from, to);
    sol.eraser(A, x, p);
    return 0;
}
