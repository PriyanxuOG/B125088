#include <iostream>
using namespace std;

class PrinterManager;

class Printer
{
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    Printer(string name, int pages, int ink, bool power)
    {
        printerName = name;
        pagesPrinted = pages;
        inkLevel = ink;
        powerStatus = power;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:
    void displayInfo(Printer &p)
    {
        cout << "\n--- Printer Information ---\n";
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
        cout << "Power: " << (p.powerStatus ? "ON" : "OFF") << endl;
    }

    void turnOn(Printer &p)
    {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }

    void turnOff(Printer &p)
    {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInk(Printer &p)
    {
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
    }

    void resetPageCount(Printer &p)
    {
        p.pagesPrinted = 0;
        cout << "Page count reset successfully." << endl;
    }
};

int main()
{
    Printer p("HP", 250, 75, false);

    PrinterManager manager;

    manager.displayInfo(p);

    manager.turnOn(p);
    manager.checkInk(p);

    manager.resetPageCount(p);

    manager.turnOff(p);

    manager.displayInfo(p);

    return 0;
}