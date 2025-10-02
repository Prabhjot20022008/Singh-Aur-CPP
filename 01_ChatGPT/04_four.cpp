#include <iostream>

using namespace std;

int* fillArray(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        *(arr+i) = (i + 1) * (i + 1) * (i + 1) ;
    }
    
    return arr;
}
int main() {
    int size;
    cout << "Enter Size : ";
    cin >> size;

    int* arr = new int[size];
    fillArray(arr,size);

    cout << "Reversed Cubes : ";
    for (int i = (size-1); i >= 0; i--)
    {
        cout << *(arr+i) << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}