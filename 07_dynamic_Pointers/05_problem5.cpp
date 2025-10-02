#include <iostream>

using namespace std;

int main() {
    int *p = new int;
    cout << "Enter a Number : ";
    cin >> *p;

    cout << "Value of p : " << *p << endl;

    delete p;
    return 0;
}