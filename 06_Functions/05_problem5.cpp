#include <iostream>

using namespace std;

void swapper(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a,b;

    cout << "Enter Number 1 : ";
    cin >> a;
    cout << "Enter Number 2 : ";
    cin >> b;
    
    cout << endl;
    
    cout << "Before Swapping" << endl;
    cout << "Number 1 = " << a << endl;
    cout << "Number 2 = " << b << endl;

    cout << endl;

    swapper(a,b);

    cout << "After Swapping" << endl;
    cout << "Number 1 = " << a << endl;
    cout << "Number 2 = " << b << endl;
    return 0;
}