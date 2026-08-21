#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit(string name, int id, int visitors, bool status)
    {
        exhibitName = name;
        exhibitID = id;
        visitorCount = visitors;
        displayStatus = status;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void displayInfo(Exhibit &e)
    {
        cout << "\n--- Exhibit Information ---\n";
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Status: " << (e.displayStatus ? "Open" : "Closed") << endl;
    }

    void addVisitors(Exhibit &e, int visitors)
    {
        e.visitorCount += visitors;
        cout << visitors << " visitors added." << endl;
    }

    void resetVisitors(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void checkStatus(Exhibit &e)
    {
        cout << "Exhibit is currently "
             << (e.displayStatus ? "OPEN" : "CLOSED") << endl;
    }
};

int main()
{
    Exhibit e("Dinosaur", 101, 20, false);

    MuseumManager manager;

    manager.displayInfo(e);

    manager.openExhibit(e);
    manager.addVisitors(e, 15);
    manager.checkStatus(e);

    manager.resetVisitors(e);
    manager.closeExhibit(e);

    manager.displayInfo(e);

    return 0;
}