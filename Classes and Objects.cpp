
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here
#include<bits/stdc++.h>

class Student{
    private:
         vector<int> marks;
    public:
        Student();
        void input();
        int calculateTotalScore();
};
Student::Student(){}
void Student::input()
{
    for(int iter = 0; iter < 5; iter++)
    {
        int data;
        cin >> data;
        marks.push_back(data);
    }
}
int Student::calculateTotalScore()
{
    return accumulate(marks.begin(), marks.end(), 0);
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
