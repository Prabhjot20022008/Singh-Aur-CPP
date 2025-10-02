#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter Number 1 : ";
    cin >> num1;
    cout << "Enter Number 2 : ";
    cin >> num2;
    cout << "Enter Number 3 : ";
    cin >> num3;

    int largest;
    if(num1>num2 && num1>num3){
        largest = num1;
    }
    else if(num2>num1 && num2>num3){
        largest = num2;
    }
    else{
        largest = num3;
    }

    cout << "Largest Number : " << largest << endl;
    return 0;
}