#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKm;

public:
    VehicleService(string number, string owner, bool due, int km)
    {
        vehicleNumber = number;
        ownerName = owner;
        serviceDue = due;
        lastServiceKm = km;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void displayInfo(VehicleService &v)
    {
        cout << "\n--- Vehicle Service Information ---\n";
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Last Service: " << v.lastServiceKm << " km" << endl;
        cout << "Service Due: "
             << (v.serviceDue ? "Yes" : "No") << endl;
    }

    void completeService(VehicleService &v)
    {
        v.serviceDue = false;
        cout << "Service marked as completed." << endl;
    }

    void updateKilometres(VehicleService &v, int km)
    {
        v.lastServiceKm = km;
        cout << "Last service kilometres updated." << endl;
    }

    void checkService(VehicleService &v)
    {
        if (v.serviceDue)
            cout << "Vehicle requires servicing." << endl;
        else
            cout << "Vehicle does not require servicing." << endl;
    }
};

int main()
{
    VehicleService v("OD02AB1234", "ABCD", true, 15000);

    ServiceManager manager;

    manager.displayInfo(v);
    manager.checkService(v);

    manager.completeService(v);
    manager.updateKilometres(v, 16000);

    manager.checkService(v);
    manager.displayInfo(v);

    return 0;
}