#include <bits/stdc++.h>

using namespace std;

class Solution
{
    private:
    public:
        Solution();
        void solve(const int n);
};
Solution::Solution(){}
void Solution::solve(const int n)
{
    switch(n)
    {
        case 1:
            cout << "one" <<endl;
            break;
        case 2:
            cout << "two" <<endl;
            break;
        case 3:
            cout << "three" <<endl;
            break;
        case 4:
            cout << "four" <<endl;
            break;
        case 5:
            cout << "five" <<endl;
            break;
        case 6:
            cout << "six" <<endl;
            break;
        case 7:
            cout << "seven" <<endl;
            break;
        case 8:
            cout << "eight" <<endl;
            break;
        case 9:
            cout << "nine" <<endl;
            break;
        default:
            cout << "Greater than 9" <<endl;
            break;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    sol.solve(n);
    return 0;
}
