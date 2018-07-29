#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    public:
        Solution();
        void daysOfProgrammer(int year);
};
Solution::Solution(){}
void Solution::daysOfProgrammer(int year)
{
    int sum = 41; // just copied trick...
    if(year == 1918)
    {
        sum -= 15;
    }
    else if(year > 1918) // handling for leap year...
    {
        sum -= ((year%4 == 0 && year%100 != 0) || year%400 == 0) ? 29 : 28; // for feb...
    }
    else
    {
        sum -= (year%4 != 0) ? 28 : 29; // main leap year requirement is %4 ...
    }
    cout << sum<<'.'<<"09"<<'.' <<year<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int year;
    cin >> year;
    sol.daysOfProgrammer(year);
    return 0;
}
