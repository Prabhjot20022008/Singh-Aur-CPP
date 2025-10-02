#include <iostream>

using namespace std;

class Animal{
    public:
        void sound(){
            cout << "Some generic sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void sound(){
            cout << "Woof Woof" << endl;
        }
};

int main() {
    Animal a1;
    a1.sound();

    Dog d1;
    d1.sound();
    
    return 0;
}