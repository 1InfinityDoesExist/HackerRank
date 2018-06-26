#include <bits/stdc++.h>
using namespace std;
class Solution{
    private:
    public:
        Solution();
        int fibonacci(const int n);
};
Solution::Solution(){}
int Solution::fibonacci(const int n) {
    if(n <= 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    sol.fibonacci(n);
    return 0;
}
