#include <iostream>

using namespace std;

class Vehicle{
    public:
        void start(){
            cout << "Vehicle Started" << endl;
        }
};

class Car : public Vehicle{
    public:
        void start(){
            Vehicle::start(); // calling base class function in derived class
            cout << "Car Started" << endl;
        }
};

int main() {
    Car c1;
    c1.start();
    return 0;
}