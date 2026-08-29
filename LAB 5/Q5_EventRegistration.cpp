#include <iostream>
using namespace std;

class EventParticipant
{
private:
    string participantName;
    int age;
    string registrationStatus;

public:
    EventParticipant(string name, int a, string status)
    {
        participantName = name;
        age = a;
        registrationStatus = status;
    }

    friend void verifyParticipant(EventParticipant p);
};

void verifyParticipant(EventParticipant p)
{
    cout << "Participant Details";
    cout << "Name: " << p.participantName << endl;
    cout << "Age: " << p.age << endl;
    cout << "Registration Status: " << p.registrationStatus << endl;

    if (p.age >= 18 && p.registrationStatus == "active")
        cout << "Result: Eligible" << endl;
    else
        cout << "Result: Not Eligible" << endl;
}

int main()
{
    string name, status;
    int age;

    cout << "Enter participant name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter registration status: ";
    cin >> status;

    EventParticipant p(name, age, status);

    verifyParticipant(p);

    return 0;
}