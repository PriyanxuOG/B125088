#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }

    Matrix operator+(Matrix m) {
        Matrix result;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "Enter first 2x2 matrix:" << endl;
    m1.input();

    cout << "Enter second 2x2 matrix:" << endl;
    m2.input();

    m3 = m1 + m2;

    cout << "First matrix:" << endl;
    m1.display();

    cout << "Second matrix:" << endl;
    m2.display();

    cout << "Sum of matrices:" << endl;
    m3.display();

    return 0;
}