#include <iostream>

using namespace std;

int fiboFinder(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    
    int a = 0, b = 1, next;
    for(int i = 2; i <= n; i++){
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter index Value : ";
    cin >> n;

    cout << "Number at index " << n << " in Fibonacci Series : " << fiboFinder(n) << endl;
    return 0;
}