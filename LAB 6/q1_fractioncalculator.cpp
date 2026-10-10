#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction {
    int num, den;

    int findGCD(int a, int b) {
        a = abs(a);
        b = abs(b);

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }

        int g = findGCD(num, den);

        if (g != 0) {
            num /= g;
            den /= g;
        }
    }

public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
        simplify();
    }

    Fraction operator+(Fraction f) {
        return Fraction(
            num * f.den + f.num * den,
            den * f.den
        );
    }

    Fraction operator-(Fraction f) {
        return Fraction(
            num * f.den - f.num * den,
            den * f.den
        );
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    cout << "First fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    cout << "Addition: ";
    (f1 + f2).display();

    cout << "Subtraction: ";
    (f1 - f2).display();

    return 0;
}