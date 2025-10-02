#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int age;

    // Default Constructor
    Student(){
        name = "Unknown";
        age = 00;
    }

    // Parameter Constructor
    Student(string stdName, int stdAge){
        name = stdName;
        age = stdAge;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
    
    // Destructor
    ~Student(){
        cout << "Destructor Called for " << name << endl;
    }
};
int main() {
    Student s1;
    s1.display();
    return 0;
}