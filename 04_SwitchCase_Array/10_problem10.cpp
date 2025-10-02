#include <iostream>

using namespace std;

int main() {
    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i+1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    
    float avg = sum/5.0;
    cout << "Sum = " << sum <<endl;
    cout << "Average = " << avg <<endl;
    return 0;
}