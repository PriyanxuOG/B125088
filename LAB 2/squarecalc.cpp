#include <iostream>
using namespace std;

class Square {
private:
    double sideLength;
public:
    void setSideLength(double length) {
        sideLength = length;
    }

    double getSideLength() {
        return sideLength;
    }

    double calculateArea() {
        return sideLength * sideLength;
    }
    
    double calculatePerimeter() {
        return 4 * sideLength;
    }

    void displayResults() {
        cout << "Square with a side length of: " << getSideLength() << endl;
        cout << "Area of the square is: " << calculateArea() << endl;
        cout << "Perimeter of the square is: " << calculatePerimeter() << endl;
    }
};
