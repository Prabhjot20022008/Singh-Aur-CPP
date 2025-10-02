#include <iostream>

using namespace std;

class Person{
    public:
        Person(string name){
            cout << "Person Constructor called for " << name << endl;
        }
};

class Employee: public Person{
    public:
        Employee(string name, string company): Person(name){
            cout << "Employee Constructor called for " << name << " working at " << company << endl;
        }
};

int main() {
    Employee e1("Prabhjot","Amazon");
    return 0;
}