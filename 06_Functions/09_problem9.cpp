#include <iostream>

using namespace std;

int reverseNumber(int n){
    int reverse = 0;
    while(n>0){
        reverse = reverse * 10 + (n%10);
        n/=10;
    }
    return reverse;
}
int main() {
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    cout << "Reversed Number : " << reverseNumber(num) << endl;
    return 0;
}