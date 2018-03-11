#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int findDigits(int n);
};

Solution::Solution(){}
int Solution::findDigits(int n)
{
    int count (0);
    int cp = n;
    while(cp != 0)
    {
        int rem = cp%10;
        if(rem == 0)
        {
            cp /= 10;
            continue;
        }
        if(n%rem == 0)
        {
            count++;
        }
        cp /= 10;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int n;
        cin >> n;
        int ans = sol.findDigits(n);
        cout << ans << endl;
    }
    return 0;
}
