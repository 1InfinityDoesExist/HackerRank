#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    public:
        Solution();
        void solve();
};
Solution::Solution(){}
void Solution::solve(){
    set<int> s;
    int n;
    cin >> n;
    for(int iter = 0; iter < n; iter++)
    {
        int q;
        cin >> q;
        if(q == 1)
        {
            int data;
            cin >> data;
            s.insert(data);
        }
        else if(q == 2)
        {
            int d;
            cin >> d;
            if(s.find(d) != s.end())
            {
                s.erase(d);
            }
        }
        else if(q == 3)
        {
            int f;
            cin >> f;
            if(s.find(f) != s.end())
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" <<endl;
            }
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.solve();
    return 0;
}



