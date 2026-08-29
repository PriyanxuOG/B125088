#include <iostream>
using namespace std;

class ElectricMeter
{
private:
    int meterNumber;
    string consumerName;
    int unitsConsumed;

public:
    ElectricMeter(int meter, string name, int units)
    {
        meterNumber = meter;
        consumerName = name;
        unitsConsumed = units;
    }

    friend void checkUsage(ElectricMeter e);
};

void checkUsage(ElectricMeter e)
{
    cout << "Electricity Usage";
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.unitsConsumed << endl;

    if (e.unitsConsumed < 100)
        cout << "Usage Category: Low Usage" << endl;
    else if (e.unitsConsumed <= 300)
        cout << "Usage Category: Moderate Usage" << endl;
    else
        cout << "Usage Category: High Usage" << endl;
}

int main()
{
    int meter, units;
    string name;

    cout << "Enter meter number: ";
    cin >> meter;

    cout << "Enter consumer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> units;

    ElectricMeter e(meter, name, units);

    checkUsage(e);

    return 0;
}