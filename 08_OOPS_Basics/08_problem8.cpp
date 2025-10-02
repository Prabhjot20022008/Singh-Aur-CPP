#include <iostream>

using namespace std;

class Rectangle{
    private:
        float length;
        float width;

    public:
        Rectangle(){
            length = 0;
            width = 0;
        }

        Rectangle(float len, float wid){
            length = len;
            width = wid;
        }

        float area(){
            return length*width;
        }

        float perimeter(){
            return 2*(length+width);
        }

        void display(){
            cout << "Area : " << area() << endl;
            cout << "Perimeter : " << perimeter() << endl;
        }

        ~Rectangle(){
            cout << "Destructor Called for Rectangle" << endl;
        }
};
int main() {
    Rectangle r1(12,14);
    // r1.area();
    // r1.perimeter();
    r1.display();
    return 0;
}