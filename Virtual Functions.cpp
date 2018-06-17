#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:

    //instead of pure virtual function just virtual funciton can also be used....
        virtual void getdata() = 0;//forces you to define the getdata() method...
        virtual void putdata() = 0;//forces you to define the putdata() method...
};
class Professor : public Person{
    protected:
         int publication;
         int id;
        static int current_id;
    public:
        Professor() : id(current_id++){}
        void getdata(){

            string _name;
            cin >> _name;
            name = _name;
            int _age;
            cin >> _age;
            age = _age;
            cin >> publication;
        }
        void putdata(){
            cout << name << " "<< age << " "<<publication <<" "<< id<<endl;

        }
};


class Student : public Person{
    protected:
        vector<int> marks;
        int id;
        static int current_id;
    public:
        Student() : id(current_id++){}
        void getdata(){
           string _name;
            cin >> _name;
            name = _name;
            int _age;
            cin >> _age;
            age = _age;
            for(int iter = 0; iter < 6; iter++)
            {
                int data;
                cin >> data;
                marks.push_back(data);
            }


        }
        void putdata(){
            int total = accumulate(marks.begin(), marks.end(), 0);
            cout << name << " "<< age<< " "<<total << " "<<id <<endl;
        }
};
int Professor::current_id{1};
int Student::current_id{1};


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor();

        }
        else per[i] = new Student(); // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
