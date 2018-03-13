#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        unsigned long long int taumBday(int b, int w, int x, int y, int z);
};
Solution::Solution(){}
unsigned long long int min(int a, int b)
{
    return a < b ? a : b;
}
unsigned long long int Solution::taumBday(int b, int w, int x, int y, int z)
{
    unsigned long long int black = min(x, y+z);
    unsigned long long int white = min(y, x+z);
    return (black*b + white*w);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        unsigned long long int result = sol.taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}
