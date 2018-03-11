#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int beautifulDays(int x, int y, int z);
};
Solution::Solution(){}
int Solution::beautifulDays(int i, int j, int k)
{
    int count (0);
    if(k <= 0)
    {
        return count;
    }
    for(int iter = i; iter <= j; iter++)
    {
        int cp = iter;
        int reverse_digit = 0;
        while(cp != 0)
        {
            reverse_digit = reverse_digit * 10 + cp%10;
            cp /= 10;
        }
        if(abs(iter-reverse_digit)% k == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int x, y, z;
    cin >> x >> y >> z;
    int result = sol.beautifulDays(x, y, z);
    cout << result << endl;
    return 0;
}
