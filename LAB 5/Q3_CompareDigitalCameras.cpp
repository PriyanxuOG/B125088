#include <iostream>
using namespace std;

class Camera
{
private:
    string brand;
    string model;
    float megapixels;
    int storageCapacity;

public:
    Camera(string b, string m, float mp, int storage)
    {
        brand = b;
        model = m;
        megapixels = mp;
        storageCapacity = storage;
    }

    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2)
{
    Camera better = c1;

    if (c2.megapixels > c1.megapixels)
        better = c2;
    else if (c2.megapixels == c1.megapixels &&
             c2.storageCapacity > c1.storageCapacity)
        better = c2;

    cout << "Better Camera";
    cout << "Brand: " << better.brand << endl;
    cout << "Model: " << better.model << endl;
    cout << "Megapixels: " << better.megapixels << endl;
    cout << "Storage Capacity: " << better.storageCapacity << " GB" << endl;
}

int main()
{
    string b1, m1, b2, m2;
    float mp1, mp2;
    int s1, s2;

    cout << "Enter details of Camera 1:\n";

    cout << "Brand: ";
    cin >> b1;

    cout << "Model: ";
    cin >> m1;

    cout << "Megapixels: ";
    cin >> mp1;

    cout << "Storage Capacity (GB): ";
    cin >> s1;

    cout << "\nEnter details of Camera 2:\n";

    cout << "Brand: ";
    cin >> b2;

    cout << "Model: ";
    cin >> m2;

    cout << "Megapixels: ";
    cin >> mp2;

    cout << "Storage Capacity (GB): ";
    cin >> s2;

    Camera c1(b1, m1, mp1, s1);
    Camera c2(b2, m2, mp2, s2);

    compareCamera(c1, c2);

    return 0;
}