#include <iostream>

using namespace std;

void greet(string name){
    cout << "Hello, " << name << "!" << endl; 
}
int main() {
    string name;
    cout << "Enter a name : ";
    getline(cin, name);

    greet(name);
    return 0;
}