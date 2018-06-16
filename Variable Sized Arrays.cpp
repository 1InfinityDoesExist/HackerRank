#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void solve(map<int, vector<int> > &mp, vector<pair<int, int> > &vp);

};
Solution::Solution(){}
void Solution::solve(map<int, vector<int> > &mp, vector<pair<int, int> > &vp)
{
    for(int iter = 0; iter < vp.size(); iter++)
    {
        pair<int, int> p = vp[iter];
        int index = p.first;
        int value = p.second;
        vector<int> v = mp[index];
        cout << v[value] << endl;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    int queries;
    cin >> queries;
    map<int, vector<int> > mp;
    for(int iter = 0; iter < n; iter++)
    {
        int num;
        cin >> num;
        for(int jter = 0; jter < num ;jter++)
        {
            int data;
            cin >> data;
            mp[iter].push_back(data);
        }
    }
    vector<pair<int, int> > vp;
    for(int iter = 0; iter < queries; iter++)
    {
        int key, value;
        cin >> key >> value;
        vp.push_back(make_pair(key, value));
    }

    sol.solve(mp, vp);
    return 0;
}
