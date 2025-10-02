#include <iostream>

using namespace std;

int main() {
    int arr[5], smallest;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i+1 << " : ";
        cin >> arr[i];
    }

    smallest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    
    cout << "Smallest = " << smallest <<endl;
    return 0;
}