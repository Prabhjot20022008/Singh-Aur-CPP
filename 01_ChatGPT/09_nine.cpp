#include <iostream>
using namespace std;

void reverseArray(int* arr, int n) {
    int* start = arr;        // pointer to first element
    int* end = arr + n - 1;  // pointer to last element

    while (start < end) {
        // swap values at start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // move pointers towards each other
        start++;
        end--;
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
