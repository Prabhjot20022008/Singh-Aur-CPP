#include <iostream>
using namespace std;

int* fillFibonacci(int* arr, int n) {
    if (n > 0) arr[0] = 0;       // first number
    if (n > 1) arr[1] = 1;       // second number

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];  // Fibonacci formula
    }
    return arr;
}

int main() {
    int size;
    cout << "Enter Size : ";
    cin >> size;

    if (size <= 0) {
        cout << "Size must be positive!" << endl;
        return 0;
    }

    int* arr = new int[size];    // dynamic allocation
    fillFibonacci(arr, size);

    cout << "Fibonacci Series : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed Series  : ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;   // free memory
    return 0;
}
