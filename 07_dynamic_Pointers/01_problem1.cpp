#include <iostream>

using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 10;

    cout << "Value of Pointer : " << *ptr << endl;
    delete ptr;
    return 0;
}