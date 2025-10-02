#include <iostream>

using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 10;

    int &ref = *ptr;
    ref = 100;

    cout << "Value of ptr (Changed via ref) : " << *ptr << endl;

    delete ptr;
    return 0;
}