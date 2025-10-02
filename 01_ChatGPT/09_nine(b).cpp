#include <iostream>
using namespace std;

void reverseArray(int* arr, int n) {
    for (int i = 0; i < n/2; i++) {
        // swap arr[i] and arr[n - i - 1]
        int temp = *(arr + i);               // arr[i]
        *(arr + i) = *(arr + (n - i - 1));   // arr[n-i-1]
        *(arr + (n - i - 1)) = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
