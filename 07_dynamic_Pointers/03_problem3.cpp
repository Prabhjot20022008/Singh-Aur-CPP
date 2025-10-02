#include <iostream>

using namespace std;

int main() {
    int x = 50;
    int &ref = x;
    ref = 5; // Changes value of x via ref

    cout << "Value of X (after changing by reference): " << x << endl;
    return 0;
}