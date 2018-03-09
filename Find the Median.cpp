#include <bits/stdc++.h>

using namespace std;

int findMedian(vector <int> arr)
{
    // Complete this function
    sort(arr.begin(), arr.end());
    if(arr.size()%2 != 0)
    {
        return arr[arr.size()/2];
    }
    else
    {
        int len = arr.size();

        return (arr[(len-1)/2] + arr[len/2])/2;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = findMedian(arr);
    cout << result << endl;
    return 0;
}
