#include <iostream>

using namespace std;

int main() {
    int a = 100;
    int *ptr = &a;

    cout << "Address of a : " << ptr << endl;
    cout << "Value of a : " << *ptr << endl;
    return 0;
}