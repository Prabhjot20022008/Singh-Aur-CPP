#include <iostream>

using namespace std;

int main() {
    cout << "arr(m x n)" << endl;

    int m,n;
    cout << "Enter value of m : ";
    cin >> m;
    cout << "Enter value of n : ";
    cin >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter arr[" << i << "][" << j << "] value : ";
            cin >> arr[i][j];
        }
        
    }

    cout << "Array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}