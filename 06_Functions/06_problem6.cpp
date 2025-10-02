#include <iostream>

using namespace std;

int pow(int base, int expo){
    int result = 1;
    for(int i = 1; i<=expo; i++){
        result*=base;
    }

    return result;
}

int main() {
    int base, expo;
    cout << "Enter Base Value : ";
    cin >> base;

    cout << "Enter Exponent Value : ";
    cin >> expo;

    cout << "Output : " << pow(base,expo) << endl;
    return 0;
}