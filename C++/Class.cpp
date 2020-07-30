#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student {
    private:
        int age, standard;
        string first_name, last_name;

    public:
        void set_age(int input_age){
            age = input_age;
        }

        void set_standard(int input_standard){
            standard = input_standard;
        }

        void set_first_name(string input_first){
            first_name = input_first;
        }

        void set_last_name(string input_last){
            last_name = input_last;
        }

        int get_age(){
            return age;
        }

        int get_standard(){
            return standard;
        }

        string get_first_name(){
            return first_name;
        }

        string get_last_name(){
            return last_name;
        }

        string to_string(){
             string to_send;

             stringstream ss;
             ss << age;
             to_send = ss.str();
             to_send += ",";

             to_send += first_name;
             to_send += ",";

             to_send += last_name;
             to_send += ",";

             ss.str("");
             ss << standard;
             to_send += ss.str();
             
             return to_send;
        }
};

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
    cout << st.to_string();
    
    return 0;
}