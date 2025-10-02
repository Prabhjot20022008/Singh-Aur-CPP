#include <iostream>

using namespace std;

class Car{
    private:
        string carBrand;
        int carYear;
    
    public:
        Car(){
            carBrand = "XYZ";
            carYear = 0000;
        }

        Car(string brand,int year){
            carBrand = brand;
            carYear = year;
        }

        void display(){
            cout << "Brand : \"" << carBrand << "\"" << endl;
            cout << "Year : \"" << carYear << "\"" << endl;
        }

        ~Car(){
            cout << "Destructor Called for \"" << carBrand << " (" << carYear << ")\"" << endl;
        }
};
int main() {
    Car bolero("Mahindra Bolero",2024);
    bolero.display();

    Car creta("Hyundai Creta",2022);
    creta.display();

    Car swift("Maruti Suzuki Swift Dzire",2019);
    swift.display();
    return 0;
}