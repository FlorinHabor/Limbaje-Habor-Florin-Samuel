#include <iostream>
#include <string>
using namespace std;

void generateStrings(string currentString, int maxLength) {
    if (currentString.length() == maxLength) {
        cout << currentString << endl;
        return;
    }

    generateStrings(currentString + "a", maxLength);
    generateStrings(currentString + "b", maxLength);
}

int main() {
    int maxLength = 8;
    cout << "Toate sirurile de lungime maximă:" << endl;
    generateStrings("", maxLength);
    return 0;
}