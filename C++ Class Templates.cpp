#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
#include<bits/stdc++.h>

/*
template <typename T>
class A{
    private:
        T a;
    public:
        T getA() const{
            return a;
        }
        void setA(const T &x){
            a = x;
        }
};

*/

template <typename T>
class AddElements{
    private:
        T num;
    public:
        AddElements(const T &num) : num(num){}
        T add(const T &x) const{
            return num + x;
        }
        T concatenate(const T &str) const{
            return num + str;
        }

};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
