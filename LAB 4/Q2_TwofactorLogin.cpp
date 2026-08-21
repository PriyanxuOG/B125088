#include <iostream>
using namespace std;

class UserAccount
{
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:
    UserAccount(string user, int attempts, string status)
    {
        username = user;
        loginAttempts = attempts;
        accountStatus = status;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u)
{
    cout << "Account Details";
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;

    if (u.loginAttempts >= 3)
        cout << "Account Status: Account Locked" << endl;
    else
        cout << "Account Status: Account Active" << endl;
}

int main()
{
    string username, status;
    int attempts;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter login attempts: ";
    cin >> attempts;

    cout << "Enter account status: ";
    cin >> status;

    UserAccount u(username, attempts, status);

    checkAccount(u);

    return 0;
}