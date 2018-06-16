#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int a;
        int s;
        string fn;
        string ln;
    public:
        Student();
        void set_age(int age)
        {
            a = age;
        }
        void set_standard(int standard)
        {
            s = standard;
        }
        void set_first_name(string first_name){
            fn = first_name;
        }
        void set_last_name(string last_name){
            ln = last_name;
        }

        int get_age()
        {
            return a;
        }
        int get_standard(){
            return s;
        }
        string get_first_name(){
            return fn;
        }
        string get_last_name(){
            return ln;
        }
        void to_string()
    {
        cout << a << ',' << fn << ',' << ln <<','<<s<<endl;
    }

};
Student::Student(){}


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();

    return 0;
}
