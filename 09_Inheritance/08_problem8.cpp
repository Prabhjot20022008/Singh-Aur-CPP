#include <iostream>

using namespace std;

class Person{
    public:
        Person(string name){
            cout << "Person Constructor called for " << name << endl;
        }
};

class Job{
    public:
        Job(string position){
            cout << "Job Constructor called for " << position << endl;
        }
};

class Employee: public Person, public Job{
    public:
        Employee(string n, string p): Person(n), Job(p){
            cout << "Employee Constructor Called for " << n << " working as " << p << endl;
        }
};

int main() {
    Employee e1("Bob","SDE");
    return 0;
}