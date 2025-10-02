#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "Enter 3rd Number : ";
    cin >> c;

    int largest;
    if(a>b){
        if(a>c){
            largest = a;
        }
        else{
            largest = c;
        }
    }

    else{
        if(b>c){
            largest = b;
        }
        else{
            largest = c;
        }
    }

    cout << "Largest : " << largest << endl;
    return 0;
}