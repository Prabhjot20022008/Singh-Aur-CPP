#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your Name : ";
    getline(cin,name);
    cout << "Hello, " << name << "! Welcome to C++" << endl;
    return 0;
}