#include <iostream>

using namespace std;

int maxOfThree(int a, int b, int c){
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}


int main() {
    int a, b, c;

    cout << "Enter Number 1 : ";
    cin >> a;
    cout << "Enter Number 2 : ";
    cin >> b;
    cout << "Enter Number 3 : ";
    cin >> c;

    cout << "Largest Number : " << maxOfThree(a,b,c) << endl;
    return 0;
}