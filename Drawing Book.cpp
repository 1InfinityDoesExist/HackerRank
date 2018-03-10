#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int turnPages(int n, int p);
};
Solution::Solution(){}
int countPage(int n)
{
    return (n+2)/2;
}
int min(int x, int y)
{
    return x < y ? x :  y;
}
int Solution::turnPages(int n ,int p)
{
    int total_pages = countPage(n);
    int frontSay = countPage(p) -1;
    int backSay = total_pages - frontSay -1;
    return min(frontSay, backSay);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    Solution sol;
    int n, p;
    cin >> n >> p;
    int ans = sol.turnPages(n, p);
    cout << ans << endl;
    return 0;
}
