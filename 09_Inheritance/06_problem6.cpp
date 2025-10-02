#include <iostream>

using namespace std;

class Person{
    public:
        string name;

        void setName(string n){
            name = n;
        }
};

class Job{
    public:
        string position;

        void setPosition(string p){
            position = p;
        }
};

class Employee: public Person, public Job{
    public:
        void showDetails(){
            cout << "Name : " << name << endl;
            cout << "Position : " << position << endl;
        }
};

int main() {
    Employee e1;
    e1.setName("Bob");
    e1.setPosition("SDE");
    e1.showDetails();
    return 0;
}