#include <iostream>

using namespace std;

int main() {
    int arr[5],n;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i+1 << " : ";
        cin >> arr[i];
    }

    cout << "Enter a Number to search through the array : ";
    cin >> n;


    for (int i = 0; i <5 ; i++)
    {
        if(arr[i]==n){
            cout << n << " found at Index "<< i << endl;
            return 0;
        }
    }
    
    cout << n << " not found!" << endl;
    return 0;
}