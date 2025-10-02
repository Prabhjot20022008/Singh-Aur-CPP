#include <iostream>

using namespace std;

void fibonacci(int n){
    int a = 0, b = 1, next;
    cout << "Fibonacci Series upto \"" << n << "\" : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    
}
int main() {
    int n;
    cout << "Enter a Number upto which you want to get Fibonacci Series : ";
    cin >> n;

    fibonacci(n);
    return 0;
}