#include <iostream>
using namespace std;

class Duration {
    int hours, minutes;

public:
    Duration(int h = 0, int m = 0) {
        hours = h + m / 60;
        minutes = m % 60;
    }

    Duration operator+(Duration d) {
        return Duration(hours + d.hours,
                        minutes + d.minutes);
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Duration d1(2, 45), d2(1, 30);

    cout << "First duration: ";
    d1.display();

    cout << "Second duration: ";
    d2.display();

    Duration d3 = d1 + d2;

    cout << "Total duration: ";
    d3.display();

    return 0;
}