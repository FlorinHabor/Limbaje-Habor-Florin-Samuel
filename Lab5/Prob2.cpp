#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
    char stare[3] = "S1";
    string instructiuni;

    while (true) {
        cin >> instructiuni;
        for (int i = 0; i < instructiuni.length(); i++) {
            if (stare == "S1")
                if (instructiuni[i] == 'B')
                    strcpy(stare, "S2");
                else
                    strcpy(stare, "S1");
            else
                if (instructiuni[i] == 'A')
                    strcpy(stare, "S1");
                else
                    strcpy(stare, "S2");
        }
        cout << stare << '\n';
        strcpy(stare, "S1");
    }
    return 0;
}