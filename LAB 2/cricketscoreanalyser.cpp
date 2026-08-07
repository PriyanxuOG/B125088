#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float battingAverage;

public:
    void accept()
    {
        cout << "Enter Player Name: ";
        cin >> playerName;

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    void calculateAverage()
    {
        battingAverage = (float)totalRuns / matchesPlayed;
    }

    void display()
    {
        cout << "\nPlayer Name     : " << playerName << endl;
        cout << "Matches Played  : " << matchesPlayed << endl;
        cout << "Total Runs      : " << totalRuns << endl;
        cout << "Batting Average : " << battingAverage << endl;

        if (battingAverage >= 50)
            cout << "Performance     : Excellent" << endl;
        else if (battingAverage >= 35)
            cout << "Performance     : Good" << endl;
        else if (battingAverage >= 20)
            cout << "Performance     : Average" << endl;
        else
            cout << "Performance     : Poor" << endl;
    }
};

int main()
{
    CricketPlayer player;

    player.accept();
    player.calculateAverage();
    player.display();

    return 0;
}