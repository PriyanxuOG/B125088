#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
public:
    void setCelsius(double temp) {
        celsius = temp;
    }

    double getCelsius() {
        return celsius;
    }

    double convertToFahrenheit() {
        return (9.0/5.0)*celsius + 32;
    }

    void displayTempretures() {
        cout << "The temperature in Celsius is: " << getCelsius() << endl;
        cout << "The temperature in Fahrenheit is: " << convertToFahrenheit() << endl;
    }
};
