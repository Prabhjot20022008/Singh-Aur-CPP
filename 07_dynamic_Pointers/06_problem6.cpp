#include <iostream>

using namespace std;

int main() {
    int x = 20;
    int *ptr = &x;
    int **pptr = &ptr;

    cout << "Value of x : " << **pptr << endl;
    return 0;
}