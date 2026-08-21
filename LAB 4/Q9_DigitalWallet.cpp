#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet
{
private:
    string userName;
    double walletBalance;
    bool walletStatus;

public:
    DigitalWallet(string name, double balance, bool status)
    {
        userName = name;
        walletBalance = balance;
        walletStatus = status;
    }

    friend class WalletManager;
};

class WalletManager
{
public:
    void displayDetails(DigitalWallet &w)
    {
        cout << "\n--- Wallet Details ---\n";
        cout << "User Name: " << w.userName << endl;
        cout << "Balance: Rs. " << w.walletBalance << endl;
        cout << "Status: " << (w.walletStatus ? "Active" : "Disabled") << endl;
    }

    void addMoney(DigitalWallet &w, double amount)
    {
        if (w.walletStatus)
        {
            w.walletBalance += amount;
            cout << "Money added successfully." << endl;
        }
        else
            cout << "Wallet is disabled." << endl;
    }

    void deductMoney(DigitalWallet &w, double amount)
    {
        if (!w.walletStatus)
        {
            cout << "Wallet is disabled." << endl;
        }
        else if (amount <= w.walletBalance)
        {
            w.walletBalance -= amount;
            cout << "Money deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void disableWallet(DigitalWallet &w)
    {
        w.walletStatus = false;
        cout << "Wallet disabled." << endl;
    }

    void checkStatus(DigitalWallet &w)
    {
        cout << "Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled") << endl;
    }
};

int main()
{
    DigitalWallet wallet("ABC", 4000, true);

    WalletManager manager;

    manager.displayDetails(wallet);

    manager.addMoney(wallet, 2000);
    manager.deductMoney(wallet, 1500);

    manager.checkStatus(wallet);

    manager.disableWallet(wallet);

    manager.displayDetails(wallet);

    return 0;
}