#include <iostream>
using namespace std;

class Product {
    int id, qty;
    string name;
    float price;

public:
    void input() {
        cin >> id >> name >> price >> qty;
    }

    void display() {
        cout << id << " " << name << " "
             << price << " " << qty << '\n';
    }

    float cost() {
        return price * qty;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product *p = new Product[n];
    float total = 0;

    for(int i = 0; i < n; i++) {
        cout << "Enter ID, Name, Price, Quantity: ";
        p[i].input();
        total += p[i].cost();
    }

    cout << "\nProducts:\n";
    for(int i = 0; i < n; i++) p[i].display();

    cout << "Total Amount: Rs." << total;

    delete[] p;
}