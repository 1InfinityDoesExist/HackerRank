#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    public:
        Solution();
        void almost_sorted(vector<long long int> &A);
};

void swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_vector(vector<long long int> &A, long long int start, long long int stop)
{
    reverse(A.begin()+start, A.end()-stop);
}
Solution::Solution(){}
void Solution::almost_sorted(vector<long long int> &A)
{

    if(A.size() == 2){
        if(A[0] > A[1])
        {
            swap(A[0], A[1]);
            cout << "yes" << endl;
            cout << "swap" << " "<< 1 << " "<<2;
            return;

        }
    }
    for(long long int iter = A.size()-1; iter >= 0; iter--)
    {
        long long int count (0);
        if(A[iter] < A[iter-1])
        {
            int jter = iter-1;
            while(jter >= 0 && A[jter] < A[jter-1])
            {
                count++;
                jter--;
            }
            if(count >= 2)// && A[iter] > A[jter-1])
            {
                reverse_vector(A, jter, iter);
              /*  for(int i = 0; i < A.size()-1; i++)
                {
                    if(A[i] > A[i+1])
                    {
                        cout <<"no";
                        return;
                    }
                }*/
                cout << "yes" << endl;
                cout << "reverse" << " "<< jter+1 << " "<<iter+1;
                return;
            }
            else
            {
                 if(A[iter] < A[iter-1])
                 {
                    long long int jter = iter-1;
                    while(jter >=0 && A[iter] < A[jter])
                    {
                        jter--;
                    }
                     if(A[jter+1] > A[jter+2] )
                     {
                        swap(A[jter+1], A[iter]);


                          for(int i = 0; i < A.size()-1; i++)
                            {
                                 if(A[i] > A[i+1])
                                 {
                                    cout <<"no";
                                    return;
                                  }
                            }


                         if(A[iter] < A[iter+1])
                         {
                            cout << "yes" << endl;
                            cout << "swap" << " "<< jter+2 << " "<<iter+1;
                            return;
                         }
                     }
                }
            }
        }
    }
    cout << "no";
    return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution sol;
    int n;
    cin >> n;
    vector<long long int> A;
    for(int iter = 0; iter < n; iter++)
    {
        long long int data;
        cin >> data;
        A.push_back(data);
    }
    sol.almost_sorted(A);
    return 0;
}
