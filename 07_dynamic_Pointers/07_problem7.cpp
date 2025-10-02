#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter length of array : ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Value for Index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Array : ";
    
    for (int i = 0; i < n; i++)
    {
        cout  << arr[i] << " ";
    }
    
    delete[] arr;
    return 0;
}