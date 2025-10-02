#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    // Step 1: allocate array of pointers
    int **arr = new int*[m];

    // Step 2: allocate each row
    for(int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    // Input values
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print array
    cout << "2D Array: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
