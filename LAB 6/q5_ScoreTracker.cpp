#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s = 0) {
        score = s;
    }

    Score operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() {
        cout << score << endl;
    }
};

int main() {
    Score s1(10);

    cout << "Initial score: ";
    s1.display();

    Score s2 = ++s1;

    cout << "After prefix increment:" << endl;
    cout << "s1 = ";
    s1.display();
    cout << "s2 = ";
    s2.display();

    Score s3 = s1++;

    cout << "After postfix increment:" << endl;
    cout << "s1 = ";
    s1.display();
    cout << "s3 = ";
    s3.display();

    return 0;
}