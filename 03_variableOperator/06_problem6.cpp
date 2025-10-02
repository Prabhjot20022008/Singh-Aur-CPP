#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    num%2==0 ? cout << num << " is Even" << endl : cout << num << " is Odd" << endl;
    return 0;
}