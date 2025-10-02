#include <iostream>

using namespace std;

int main() {
    float radius, area;
    cout << "Enter value of Radius : ";
    cin >> radius;

    area = 3.14*radius*radius;

    cout << "Area of Circle : " << area << endl;
    return 0;
}