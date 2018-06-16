#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
    public:
        Solution();
        Solution(int a, int b, string fn, string ln) : age(a), standard(b), first_name(fn), last_name(ln){};
        void display();
};
Solution::Solution(){}
void Solution::display(){
    cout << age<< endl;
    cout << last_name<<','<< " " << first_name << endl;
    cout << standard << endl;
    cout << endl;
    cout << age<<','<<first_name<<','<<last_name<<','<<standard<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n ;
    string fn, ln;
    cin >> fn >> ln;
    cin >> x;
     Solution sol(n,x,fn,ln);
    sol.display();
    return 0;
}
