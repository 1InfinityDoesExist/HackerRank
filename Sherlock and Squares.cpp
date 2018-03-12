#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int squares(const int a, const int b);
};
Solution::Solution(){}
int Solution::squares(const int a, const int b)
{
    // Complete this function
    return (floor(sqrt(b)) - ceil(sqrt(a)) +1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int a;
        int b;
        cin >> a >> b;
        int result = sol.squares(a, b);
        cout << result << endl;
    }
    return 0;
}
