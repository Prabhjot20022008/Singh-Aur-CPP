#include <iostream>

using namespace std;

int main() {
    int a = 0,b = 1,i = 0,next;
    while(i<10){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    return 0;
}