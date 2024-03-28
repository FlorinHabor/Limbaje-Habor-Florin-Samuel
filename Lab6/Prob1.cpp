#include <iostream>
#include <regex>

using namespace std;

int main() {
    string cod;
    regex regex("^[1-9][0-9]{4}$");
    while (1) {
        cin >> cod;
        if (regex_match(cod, regex))
            cout << "Este cod postal\n";
        else
            cout << "Nu este cod postal\n";
    }
    return 0;
}