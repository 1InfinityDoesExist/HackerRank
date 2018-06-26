#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    public:
        Solution();
        int equalStacks();
};
Solution::Solution(){}
int Solution::equalStacks(){
    int k, l, m;
    cin >> k >> l >> m;
    vector<int> first(k);
    vector<int> second(l);
    vector<int> third(m);
    int h1 (0);
    int h2 (0);
    int h3 (0);
    for(int iter = 0; iter < k; iter++)
    {
        int data;
        cin >> data;
        first[iter] = data;
        h1 += data;
    }
    for(int iter = 0; iter < l; iter++)
    {
        int data;
        cin >> data;
        second[iter] = data;
        h2 += data;
    }
    for(int iter = 0; iter < m; iter++)
    {
        int data;
        cin >> data;
        third[iter] = data;
        h3 += data;
    }

    bool sameSize = false;
    if(h1 == h2 && h2 == h3){
        return h1;
    }
    int i1 (0);
    int i2 (0);
    int i3 (0);

    while(sameSize == false){
        if(h1 >= h2 && h1 >= h3){
            h1 = h1 - first[i1++];
        }
        else if(h2 >= h3 && h2 >= h1){
            h2 = h2 - second[i2++];
        }
        else if(h3 >= h2 && h3 >= h1){
            h3 = h3 - third[i3++];
        }
        if(h1 == h2 && h2 == h3 || h1 == 0 && h2 == 0 && h3 == 0){
            return h1;
        }

    }
    return h1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int ans = sol.equalStacks();
    cout << ans <<endl;
    return 0;
}
