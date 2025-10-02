#include <iostream>

using namespace std;

int sumArray(int* arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr+i);
    }
    return sum;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int output = sumArray(arr,5);
    cout << "Sum : " << output << endl;
    return 0;
}