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


};
int main() {
    Student s1("Prabhjot",15);

    cout << "Name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;
    return 0;
}