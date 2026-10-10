#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    AccountBalance(double b) {
        balance = b;
    }

    AccountBalance operator-() {
        return AccountBalance(-balance);
    }

    void display() {
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    AccountBalance a1(5000);

    cout << "Original account: ";
    a1.display();

    AccountBalance a2 = -a1;

    cout << "Negated account: ";
    a2.display();

    cout << "Original account after operation: ";
    a1.display();

    return 0;
}