#include <iostream>

using namespace std;

class Person{
    public:
        string name;

        void setName(string n){
            name = n;
        }
};

class Employee: public Person{
    public:
        string company;

        void setCompany(string c){
            company = c;
        }
};

class Manager: public Employee{
    public:
        void showDetails(){
            cout << "Name : " << name << endl;
            cout << "Company : " << company << endl;
        }
};

int main() {
    Manager m1;
    m1.setName("Alice");
    m1.setCompany("TechCorp");
    m1.showDetails();
    return 0;
}