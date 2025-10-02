#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a Number (1 to 4): ";
    cin >> n;

    switch(n){
        case(1):
            cout << "Winter" << endl;
            break;
        case(2):
            cout << "Spring" << endl;
            break;
        case(3):
            cout << "Summer" << endl;
            break;
        case(4):
            cout << "Autumn" << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
    }
    return 0;
}