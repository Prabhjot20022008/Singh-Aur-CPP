#include <iostream>

using namespace std;

int main() {
    int a = 2, b = 5, c;
    c = a;
    a = b;
    b = c;

    cout << "After swapping, a is " << a << " and b is " << b << endl;
    return 0;
}