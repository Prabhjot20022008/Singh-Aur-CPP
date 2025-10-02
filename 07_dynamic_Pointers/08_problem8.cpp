#include <iostream>

using namespace std;

int main() {
    int x = 20;
    int *p = &x;
    int &ref = x;

    cout << "Value of x (via pointer) : " << *p << endl;
    cout << "Value of x (via reference) : " << ref << endl;
    return 0;
}