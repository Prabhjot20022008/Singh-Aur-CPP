#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Enter Number 1 : ";
    cin >> a;
    cout << "Enter Number 2 : ";
    cin >> b;

    char choice;
    cout << "Enter your Choice (+,-,*,/) : ";
    cin >> choice;

    switch(choice){
        case('+'): {
            cout << "Sum = " << a+b << endl;
            break;
        }
        case('-'): {
            cout << "Difference = " << a-b << endl;
            break;
        }
        case('*'): {
            cout << "Product = " << a*b << endl;
            break;
        }
        case('/'): {
            cout << "Quotient = " << a/b << endl;
            break;
        }
        default:
            cout << "Invalid Choice!" << endl;
    }
    return 0;
}