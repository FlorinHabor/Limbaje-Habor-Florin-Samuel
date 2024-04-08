#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidIBAN(const string& iban) {
    
    if (iban.length() < 4 || iban.length() > 24) {
        return false;
    }

    for (int i = 0; i < 2; ++i) {
        if (!isupper(iban[i])) {
            return false;
        }
    }

    for (size_t i = 2; i < iban.length(); ++i) {
        if (!isdigit(iban[i])&&!isupper(iban[i])&&iban[i]!=' ') {
            return false;
        }
    }

    for (size_t i = iban.length() - 2; i < iban.length(); ++i) {
        if (!isdigit(iban[i])) {
            return false;
        }
    }    
/*
    string ibanCopy;
    for (char c : iban) {
        if (c != ' ') {
            ibanCopy += c;
        }
    }
    
    // Verificarea cifrelor de control IBAN (calculul modului 97)
    ibanCopy = ibanCopy.substr(4) + ibanCopy.substr(0, 4);
    for (size_t i = 0; i < ibanCopy.length(); ++i) {
        if (isdigit(ibanCopy[i])) {
            ibanCopy[i] = ibanCopy[i] - '0';
        }
        else {
            ibanCopy[i] = ibanCopy[i] - 'A' + 10;
        }
    }

    int remainder = 0;
    for (size_t i = 0; i < ibanCopy.length(); ++i) {
        remainder = (remainder * 10 + ibanCopy[i]) % 97;
    }

    return remainder == 1;
    */
    return true;
}

int main() {
    string iban;
    cout << "Introduceti codul IBAN: ";
    getline(cin, iban);

    if (isValidIBAN(iban)) {
        cout << "Codul IBAN este valid.\n";
    } 
    else {
        cout << "Codul IBAN nu este valid.\n";
    }

    return 0;
}
