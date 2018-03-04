#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    public:
        Solution();
        unsigned long long int minimumCandies(vector<int> &ratings);
};
Solution::Solution(){}
int max(int x, int y)
{
    return x > y ? x : y;
}
unsigned long long int Solution::minimumCandies(vector<int> &ratings)
{
    vector<int> left(ratings.size(), 1);
    vector<int> right(ratings.size(), 1);
    unsigned long long int ans (0);
    for(int iter = 1; iter < ratings.size(); iter++)
    {
        if(ratings[iter] > ratings[iter-1])
        {
            left[iter] = left[iter-1]+1;
        }
    }
    for(int iter = ratings.size()-2; iter >= 0; iter--)
    {
        if(ratings[iter] > ratings[iter+1])
        {
            right[iter] = right[iter+1] +1;
        }
    }
    for(int iter = 0; iter < ratings.size(); iter++)
    {
        ans += max(left[iter], right[iter]);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int NumberOfChildern;
    cin >> NumberOfChildern;
    vector<int> ratings;
    for(int iter = 0; iter < NumberOfChildern; iter++)
    {
        int data;
        cin >> data;
        ratings.push_back(data);
    }
    unsigned long long int ans = sol.minimumCandies(ratings);
    cout << ans <<endl;
    return 0;
}
