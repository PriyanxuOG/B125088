#include <iostream>
using namespace std;


class Time
{
private:
    int hours;
    int minutes;

public:
    
    void input()
    {
        cout << "Enter Hours: ";
        cin >> hours;

        cout << "Enter Minutes: ";
        cin >> minutes;
    }

  
    void add(Time t1, Time t2)
    {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;

        
        if (minutes >= 60)
        {
            hours = hours + (minutes / 60);
            minutes = minutes % 60;
        }
    }

   
    void display()
    {
        cout << "Resulting Time = "
             << hours << " hr "
             << minutes << " min" << endl;
    }
};


int main()
{
    Time t1, t2, result;

    cout << "Enter First Time" << endl;
    t1.input();

    cout << "\nEnter Second Time" << endl;
    t2.input();

    result.add(t1, t2);

    cout << "\nAfter Addition:" << endl;
    result.display();

    return 0;
}