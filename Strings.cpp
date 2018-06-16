#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    public:
        Solution();
        void solveKar(string str1, string str2);
};
Solution::Solution(){}
void Solution::solveKar(string str1, string str2)
{
    cout << str1.length() << " " <<str2.length() <<endl;
    string str = str1;
    cout <<str1.append(str2) <<endl;
    char c = str1[0];
    str[0] = str2[0];
    str2[0] = c;
    cout << str << " " <<str2 <<endl;
    return;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string str1, str2;
    cin >> str1 >> str2;
    sol.solveKar(str1, str2);
    return 0;
}
