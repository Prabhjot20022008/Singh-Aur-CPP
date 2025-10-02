#include <iostream>

using namespace std;

class Person{
    public:
        Person(string name){
            cout << "Person Contructor called for " << name << endl;
        }
};

class Job{
    public:
        Job(string position){
            cout << "Job Constructor called for " << position << endl;
        }
};

class Company{
    public:
        Company(string company){
            cout << "Company Constructor called for " << company << endl;
        }
};

class Employee: public Person, public Job, public Company{
    public:
        Employee(string n, string p, string c): Person(n),Job(p),Company(c){
            cout << "Employee Constructor called for " << n << " working as " << p << " at " << c << endl;
         }
};

int main() {
    Employee e1("Prabhjot","SDE","Amazon");
    return 0;
}