#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

//Write your code here.
class Equilateral : public Isosceles{
    private:
    public:
        Equilateral();
        void equilateral();
};
Equilateral::Equilateral(){}
void Equilateral::equilateral(){
    cout << "I am an equilateral triangle" <<endl;
    return;
}
int main(){

    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
