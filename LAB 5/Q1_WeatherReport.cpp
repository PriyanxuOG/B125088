#include <iostream>
using namespace std;

class Weather
{
private:
    string cityName;
    float temperature;
    

public:
    Weather(string city, float temp)
    {
        cityName = city;
        temperature = temp;
        
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w)
{
    cout << "Weather Report";
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    

    if (w.temperature > 35)
        cout << "Weather Condition: Very Hot" << endl;
    else if (w.temperature >= 20)
        cout << "Weather Condition: Pleasant" << endl;
    else
        cout << "Weather Condition: Cool" << endl;
}

int main()
{
    string city, condition;
    float temp;

    cout << "Enter city name: ";
    getline(cin, city);

    cout << "Enter temperature: ";
    cin >> temp;
    cin.ignore();


    Weather w(city, temp);

    generateReport(w);

    return 0;
}