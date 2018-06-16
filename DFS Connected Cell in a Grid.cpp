#include<bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0 ,0, 1 ,-1, 1 , -1, -1, 1};

bool isValid(int x, int y, int row, int col)
{
    if(x < 0 || y < 0 || x >= row || y >= col)
    {
        return false;
    }
    return true;
}
class Solution
{
    private:
    public:
        Solution();
        int largestRegion(vector<vector<int> > &A);
        void BFS(int iter, int jter, vector<vector<int> > &A, vector<int> &ans);
};
Solution::Solution(){}
void Solution::BFS(int iter, int jter ,vector<vector<int> > &A, vector<int> &ans){
    int row = A.size();
    int col = A[0].size();
    int count (1);
    queue<pair<int, int> > q;
    q.push(make_pair(iter, jter));
    A[iter][jter] = 0;
    while(!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;

        for(int i = 0; i < 8; i++)
        {
            int x_new = x + dx[i];
            int y_new = y + dy[i];
            if(isValid(x_new, y_new, row, col))
            {
                if(A[x_new][y_new] == 1)
                {
                    q.push(make_pair(x_new, y_new));
                     A[x_new][y_new] = 0;
                     count++;
                }
            }
        }
    }
    ans.push_back(count);
    return;
}
int Solution::largestRegion(vector<vector<int> > &A)
{
    vector<int> ans;
    for(int iter = 0; iter < A.size(); iter++)
    {
        for(int jter = 0; jter < A[0].size(); jter++)
        {
            if(A[iter][jter] == 1)
            {
                BFS(iter, jter, A, ans);
            }
        }
    }
    return *max_element(ans.begin(), ans.end());
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int row, col;
    cin >> row >> col;
    vector<vector<int> > matrix;
    for(int iter = 0; iter < row; iter++)
    {
        vector<int> temp;
        for(int jter = 0; jter < col; jter++)
        {
            int data;
            cin >> data;
            temp.push_back(data);
        }
        matrix.push_back(temp);
    }
    int ans = sol.largestRegion(matrix);
    cout << ans << endl;
    return 0;
}
