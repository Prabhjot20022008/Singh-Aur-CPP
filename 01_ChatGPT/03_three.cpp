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
    int n;
    cout << "Enter Size : ";
    cin >> n;

    int* arr = new int[n];

    fillArray(arr,n);

    cout << "Cubes : ";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr+i) << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}