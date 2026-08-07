#include <iostream>
#include <string>

namespace std {
    class Car {
    private:
        int carNumber;
        string brandName;
        string modelYear;

    public:
        void inputCarDetails() {
            cout << "Enter the Car Number: ";
            cin >> carNumber;

            cout << "Enter the Brand Name: ";
            cin.ignore();
            getline(cin, brandName);

            cout << "Enter the Model Year: ";
            cin >> modelYear;
        }

        void displayCarDetails() {
            cout << "\nCar Number: " << carNumber << endl;
            cout << "Brand Name: " << brandName << endl;
            cout << "Model Year: " << modelYear << endl;
        }
    };

    int main() {
        Car myCar;

        myCar.inputCarDetails();
        myCar.displayCarDetails();

        return 0;
    }
}
