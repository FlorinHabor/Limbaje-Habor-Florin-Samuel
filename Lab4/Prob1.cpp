#include <iostream>
#include <string>

using namespace std;

char determineFinalState(const string& input) {
    char currentState = 'A'; 
    for (char symbol : input) {
        if (currentState == 'A') {
            if (symbol == '0')
                currentState = 'B';
        }
        else if (currentState == 'B') {
            if (symbol == '0')
                currentState = 'A';
        }
    }

    return currentState;
}

int main() {
    string input;
    cout << "Input: ";
    cin >> input;
    char finalState = determineFinalState(input);
    cout <<"Final State: " << finalState << endl;

    return 0;
}