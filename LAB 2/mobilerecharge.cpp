#include <iostream>
using namespace std;

class MobileRecharge {
private:
    string mobileNumber;
    string customerName;
    double currentBalance;

public:
    void acceptCustomerDetails() {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;
    
        cout << "Enter Customer Name: ";
        cin >> customerName;
    
        cout << "Enter Current Balance: $";
        cin >> currentBalance;

        cout << "\nMobile Number: " << mobileNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Current Balance: $" << currentBalance << endl;
    }

    void rechargeAndDeduct(double amount) {
        if (amount > currentBalance) {
            cout << "Insufficient balance. Please recharge with a lower amount." << endl;
            return;
        }
        
        currentBalance -= amount;
        displayUpdatedBalance();
    }

    void displayUpdatedBalance() {
        cout << "Current Balance: $" << currentBalance << endl;
    }
};

int main() {
    MobileRecharge phone;

    phone.acceptCustomerDetails();

    phone.rechargeAndDeduct(20.00);
    
    return 0;
}
