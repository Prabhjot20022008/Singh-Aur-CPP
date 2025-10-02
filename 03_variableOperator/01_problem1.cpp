#include <iostream>

using namespace std;

int main() {
    int age;
    float height;
    char grade;
    cout << "Enter your Age : ";
    cin >> age;
    cout << "Enter your height (in feet) : ";
    cin >> height;
    cout << "Enter your Grade (A,B,C,D) : ";
    cin >> grade;

    cout << "You are " << age << " years old, " << height << " feet tall, and your grade is " << grade << endl;
    return 0;
}