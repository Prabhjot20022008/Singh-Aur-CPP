#include <iostream>

using namespace std;

int main() {
    char grade;
    cout << "Enter your Grade (A,B,C,D,F) : ";
    cin >> grade;

    switch(grade){
        case('A'):
            cout << "Excellent" << endl;
            break;
        case('B'):
            cout << "Good" << endl;
            break;
        case('C'):
            cout << "Average" << endl;
            break;
        case('D'):
            cout << "Poor" << endl;
            break;
        case('F'):
            cout << "Fail" << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
    }
    return 0;
}