#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int age;

    
    Student(string stdName, int stdAge){
        name = stdName;
        age = stdAge;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    ~Student(){
        cout << "Destructor Called for " << name << endl;
    }
};
int main() {
    Student s1("Ansh",15);
    s1.display();

    Student s2("Rahul",18);
    s2.display();
    return 0;
}