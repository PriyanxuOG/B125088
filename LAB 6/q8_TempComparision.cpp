#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }

    bool operator>(Temperature t) {
        return celsius > t.celsius;
    }

    bool operator<(Temperature t) {
        return celsius < t.celsius;
    }

    Temperature operator-() {
        return Temperature(-celsius);
    }

    void display() {
        cout << celsius << " degree Celsius" << endl;
    }
};

int main() {
    Temperature t1(35), t2(20);

    cout << "First temperature: ";
    t1.display();

    cout << "Second temperature: ";
    t2.display();

    cout << "t1 > t2: " << (t1 > t2) << endl;
    cout << "t1 < t2: " << (t1 < t2) << endl;

    Temperature t3 = -t1;

    cout << "Negated first temperature: ";
    t3.display();

    return 0;
}