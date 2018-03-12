#include <bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    public:
        Solution();
        int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2);
};
Solution::Solution(){}
int Solution::libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if(y2 == y1 && m2 ==m1 && d2 == d1)
    {
        return 0;
    }
    int charge (0);
    if(y1 > y2)
    {
        charge = 10000;
    }
    else if(y1 == y2)
    {
        if(m1 > m2)
        {
            charge = 500 * (m1 - m2);
        }
        else if(m1 == m2)
        {
            if( d1 > d2)
            {
                charge = 15*(d1 - d2);
            }
        }
    }
    return charge;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int result = sol.libraryFine(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
    return 0;
}
