#include <iostream>
#include<cctype>

using namespace std;


void countCharacters(const char* str, int& vowelCount, int& digitCount, int& spaceCount, int& consonantCount,int size) {
    const char *characters = str;
    for(int i = 0; i < size; ++i) {
        switch(characters[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowelCount++;
                break;
            case 'b': case 'c': case 'd': case 'f': case 'g':
                case 'h': case 'j': case 'k': case 'l': case 'm':
                case 'n': case 'p': case 'q': case 'r': case 's':
                case 't': case 'v': case 'w': case 'x': case 'y':
                case 'z':
                consonantCount++;
                break;
            case '0': case '1': case '2': case '3': case '4':
                case '5': case '6': case '7': case '8': case '9':
                digitCount++;
                break;
            case ' ': 
                spaceCount++;
                break;
            default:
                break;
        }
    }
}

int main() {
    int size;

    cout << "Enter the size of string to allocate memory: ";
    cin >> size;

    char* userString = new char[size];

    cout << "Enter a string: ";
    cin >> userString ;

    int vowelCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int consonantCount = 0;

    countCharacters(userString, vowelCount, digitCount, spaceCount, consonantCount,size);

    cout << "Vowels: " << vowelCount << "\n";
    cout << "Digits: " << digitCount << "\n";
    cout << "Spaces: " << spaceCount << "\n";
    cout << "Consonants: " << consonantCount << "\n";

    delete[] userString;

    return 0;
}
