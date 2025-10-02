#include <iostream>

using namespace std;

int main() {
    int arr[5], largest;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i+1 << " : ";
        cin >> arr[i];
    }

    largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    
    cout << "Largest = " << largest <<endl;
    return 0;
}