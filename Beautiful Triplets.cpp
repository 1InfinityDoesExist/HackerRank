#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        int beautifulTriplets(const int d, vector<int> &arr);
};
Solution::Solution(){}
int Solution::beautifulTriplets(const int d, vector<int> &arr)
{
    // Complete this function

    if(arr.size() < 3)
    {
        return 0;
    }
    int count (0);
    for(int iter = 0; iter < arr.size()-2; iter++)
    {
        for(int jter = iter+1; jter < arr.size()-1; jter++)
        {
            if(arr[jter]-arr[iter] == d)
            {
                for(int kter = jter+1; kter< arr.size();  kter++)
                {
                    if(arr[kter]-arr[jter] == d)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = sol.beautifulTriplets(d, arr);
    cout << result << endl;
    return 0;
}
