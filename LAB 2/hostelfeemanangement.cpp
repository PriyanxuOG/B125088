#include <iostream>
#include <string>
using namespace std;

class HostelFee
{
private:
    string studentName;
    int hostelID;
    float monthlyFee;
    int numberOfMonths;
    float totalFee;
    char delayed;

public:
    void accept()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Is Payment Delayed? (Y/N): ";
        cin >> delayed;
    }

    void calculateFee()
    {
        totalFee = monthlyFee * numberOfMonths;

        if (delayed == 'Y' || delayed == 'y')
        {
            totalFee = totalFee + 500;
        }
    }

    void display()
    {
        cout << "\nStudent Name : " << studentName << endl;
        cout << "Hostel ID    : " << hostelID << endl;
        cout << "Monthly Fee  : " << monthlyFee << endl;
        cout << "Months       : " << numberOfMonths << endl;
        cout << "Final Amount : Rs. " << totalFee << endl;
    }
};

int main()
{
    HostelFee student;

    student.accept();
    student.calculateFee();
    student.display();

    return 0;
}