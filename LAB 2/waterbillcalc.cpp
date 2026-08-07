#include <iostream>
#include <string>
using namespace std;

class WaterBill
{
private:
    int consumerNumber;
    string consumerName;
    float waterConsumption;
    float bill;

public:
    void accept()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cout << "Enter Consumer Name: ";
        cin >> consumerName;

        cout << "Enter Water Consumption (in litres): ";
        cin >> waterConsumption;
    }

    void calculateBill()
    {
        if (waterConsumption <= 500)
        {
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000)
        {
            bill = (500 * 2) + ((waterConsumption - 500) * 3);
        }
        else
        {
            bill = (500 * 2) + (500 * 3) + ((waterConsumption - 1000) * 5);
        }
    }

    void display()
    {
        cout << "\nConsumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Water Used      : " << waterConsumption << " litres" << endl;
        cout << "Total Bill      : Rs. " << bill << endl;
    }
};

int main()
{
    WaterBill customer;

    customer.accept();
    customer.calculateBill();
    customer.display();

    return 0;
}