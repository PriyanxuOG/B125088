#include<iostream>
#include<string>

using namespace std;

class HotelRoom {
private:
   int roomNumber;
   string guestName;
   int daysStayed;
   float costPerDay;
   float totalRent;

public:
    void acceptBookingDetails() {
        cout << "Enter Room Number: ";
        cin >> roomNumber;
    
        cout << "Enter Guest Name: ";
        cin >> guestName;
    
        cout << "Enter Number of days stayed: ";
        cin >> daysStayed;
    
        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    void calculateTotalRent() {
        totalRent = daysStayed * costPerDay;
    }

    void displayBookingDetails() {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Days Stayed: " << daysStayed << endl;
        cout << "Cost Per Day: " << costPerDay << endl;
        cout << "Total Rent: "<< totalRent << endl;
    }
};

int main() {
    HotelRoom room;

    room.acceptBookingDetails();
    
    room.calculateTotalRent();

    room.displayBookingDetails();

    return 0;
}
