#include <iostream>

using namespace std;

int findMax(int* arr,int n){
    int max = *arr;
    for (int i = 0; i < n; i++)
    {
        if(*(arr+i)>=max){
            max = *(arr+i);
        }
    }
    return max;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int output = findMax(arr,size);
    cout << "Max Value : " << output << endl;
    return 0;
}