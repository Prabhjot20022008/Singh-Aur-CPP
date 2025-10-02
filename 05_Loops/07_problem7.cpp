#include <iostream>

using namespace std;

int main() {
    int fact = 1;
    for(int i = 1; i<=6; i++){
        fact*=i;
    }

    cout << "Factorial of 6 = " << fact << endl;
    return 0;
}