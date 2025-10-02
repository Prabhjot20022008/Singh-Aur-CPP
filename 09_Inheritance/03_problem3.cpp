#include <iostream>

using namespace std;

class Employee{
    protected:
        int salary;

    public:
        void setSalary(int s){
            salary = s;
        }
};

class Manager: public Employee{
    public:
        void showSalary(){
            cout << "Salary : " << salary << endl;
        }
};

int main() {
    Manager m1;
    m1.setSalary(50000);
    m1.showSalary();
    return 0;
}