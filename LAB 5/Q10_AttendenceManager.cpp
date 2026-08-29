#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom
{
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;

public:
    Classroom(string name, int total, int present, bool status)
    {
        className = name;
        totalStudents = total;
        presentStudents = present;
        attendanceStatus = status;
    }

    friend class AttendanceManager;
};

class AttendanceManager
{
public:
    void displayInfo(Classroom &c)
    {
        cout << "\n--- Classroom Information ---\n";
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void updatePresentStudents(Classroom &c, int present)
    {
        if (present >= 0 && present <= c.totalStudents)
        {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        }
        else
        {
            cout << "Invalid number of students." << endl;
        }
    }

    void completeAttendance(Classroom &c)
    {
        c.attendanceStatus = true;
        cout << "Attendance marked as completed." << endl;
    }

    void checkAttendance(Classroom &c)
    {
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void displayAbsentStudents(Classroom &c)
    {
        int absent = c.totalStudents - c.presentStudents;

        cout << "Absent Students: " << absent << endl;
    }
};

int main()
{
    Classroom c("CSE B1", 60, 52, false);

    AttendanceManager manager;

    manager.displayInfo(c);

    manager.updatePresentStudents(c, 55);
    manager.completeAttendance(c);
    manager.checkAttendance(c);
    manager.displayAbsentStudents(c);

    return 0;
}