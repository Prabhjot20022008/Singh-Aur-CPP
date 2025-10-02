#include <iostream>

using namespace std;

bool isEven(int n){
    if(n%2==0) return true;
    else return false;
}

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    bool output = isEven(n);

    output==true ? cout << n << " is Even" << endl : cout << n << " is Odd" << endl;
    return 0;
}