#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    Bill(int i = 0, double a = 0) {
        items = i;
        amount = a;
    }

    Bill operator+(Bill b) {
        return Bill(items + b.items,
                    amount + b.amount);
    }

    bool operator>(Bill b) {
        return amount > b.amount;
    }

    void display() {
        cout << "Number of items: " << items
             << ", Total amount: Rs. " << amount << endl;
    }
};

int main() {
    Bill b1(3, 500);
    Bill b2(5, 800);

    cout << "First bill: ";
    b1.display();

    cout << "Second bill: ";
    b2.display();

    Bill b3 = b1 + b2;

    cout << "Combined bill: ";
    b3.display();

    cout << "Is first bill greater than second bill? "
         << (b1 > b2) << endl;

    return 0;
}