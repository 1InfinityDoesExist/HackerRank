#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, vector<int> > mp;
    for(int iter = 0; iter < n; iter++)
    {
        int data;
        cin >> data;
        if(data == 1)
        {
            string name;
            cin >> name;
            int marks;
            cin >> marks;
            mp[name].push_back(marks);
        }
        if(data == 3)
        {
            string name;
            cin >> name;
            vector<int> ans = mp[name];
            cout << accumulate(ans.begin(), ans.end(), 0) << endl;

        }
        if(data == 2)
        {
            string name;
            cin >> name;
            mp.erase(name);
        }
    }
    return 0;
}



