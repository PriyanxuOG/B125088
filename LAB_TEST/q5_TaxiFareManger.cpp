#include <iostream>
using namespace std;

class Trip {

    int tripID;
    float distance;
    float baseFare;

public:

    Trip(int id, float d, float fare) {
        tripID = id;
        distance = d;
        baseFare = fare;
    }

   
    float fare() {
        return baseFare + distance * 10;
    }

    
    float fare(int waitingTime) {
        float total = baseFare + distance * 10;

        total = total + waitingTime * 2;

        return total;
    }

    float fare(int waitingTime, int discount) {
        float total = baseFare + distance * 10;

        total = total + waitingTime * 2;

        total = total - (total * discount / 100);

        return total;
    }

    int getID() {
        return tripID;
    }

    friend void compareFare(Trip &, Trip &);
};

void compareFare(Trip &t1, Trip &t2) {

    float fare1 = t1.fare(10, 5);
    float fare2 = t2.fare(10, 5);

    cout << "Trip " << t1.tripID << " final fare: "
         << fare1 << endl;

    cout << "Trip " << t2.tripID << " final fare: "
         << fare2 << endl;

    if (fare1 < fare2)
        cout << "Trip " <<t1.tripID << " is cheaper.\n";

    else if (fare2 < fare1)
        cout << "Trip " << t2.tripID << " is cheaper.\n";

    else
        cout << "Both trips have the same fare.\n";
}

int main() {

    
    Trip *t1 = new Trip(101, 10, 50);
    Trip *t2 = new Trip(102, 15, 40);

    cout << "Normal fare of Trip 101: "
         << t1->fare() << endl;

    cout << "Fare with waiting of Trip 101: "
         << t1->fare(10) << endl;

    cout << "Fare with waiting and discount of Trip 101: "
         << t1->fare(10, 5) << endl;

    cout << endl;

    compareFare(*t1, *t2);

   
    delete t1;
    delete t2;

    return 0;
}