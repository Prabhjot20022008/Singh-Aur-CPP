#include <iostream>

using namespace std;

class ClassA{
    public:
        void show(){
            cout << "ClassA Show" << endl;
        }
};

class ClassB{
    public:
        void show(){
            cout << "ClassB Show" << endl;
        }
};

class Derived: public ClassA, public ClassB{};

int main() {
    Derived d;
    // d.show();  [causes ambigous]
    d.ClassA::show();
    d.ClassB::show();
    return 0;
}