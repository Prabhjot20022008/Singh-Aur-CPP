#include <iostream>

using namespace std;

class Student{
    private:
        int rollNo;

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

    void setRollNo(int stdRollNo){
        rollNo = stdRollNo;
    }

    int getRollNo(){
        return rollNo;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No. : " << getRollNo() << endl;
    }
    
    // Destructor
    ~Student(){
        cout << "Destructor Called for " << name << endl;
    }
};
int main() {
    Student s1("Rahul",19);
    s1.setRollNo(2510);
    s1.getRollNo();
    s1.display();
    return 0;
}