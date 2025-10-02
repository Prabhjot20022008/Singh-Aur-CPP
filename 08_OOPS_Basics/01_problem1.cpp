#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int age;
};
int main() {
    Student s1 = {"Prabhjot",16};
    // s1.name = "Rahul";
    // s1.age  = 17;


    cout << "Name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;
    return 0;
}