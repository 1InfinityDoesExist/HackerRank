#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    public:
        Solution();
        vector<int> parseInts(string str);
};
Solution::Solution(){}

vector<int> Solution::parseInts(string str) {
	// Complete this function
    vector<int> ans;
    int n = str.length();
    string s = "";
    for(string::size_type iter = 0; iter < n; iter++)
    {
        if(str[iter] == ',')
        {
            if(s.length() == 0)
            {
                continue;
            }
            else{
                ans.push_back(atoi(s.c_str()));
                s = "";
            }
        }
        else{
            s = s + str[iter];
            if(iter == str.length()-1)
            {
                ans.push_back(atoi(s.c_str()));
            }
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string str;
    cin >> str;
    vector<int> integers = sol.parseInts(str);
    for(vector<int>::iterator iter = integers.begin(); iter != integers.end(); iter++) {
        cout << *iter << "\n";
    }

    return 0;
}
