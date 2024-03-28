#include <iostream>

using namespace std;

void afiseazaMeniu() {
    cout << "Selectati o bautura:\n";
    cout << "C - Cafea\n";
    cout << "T - Ceai\n";
    cout << "A - Cappuccino\n";
    cout << "H - Ciocolata calda\n";
    cout << "O - Confirmare selectie\n";
    cout << "Introduceti optiunea: ";
}

int main() {
    int stare = 0;
    char alegere;

    while (true) {
        afiseazaMeniu();
        cin >> alegere;
        if (stare == 0) {
            switch (alegere) {
            case 'C':
                cout << "Cafea selectata\n";
                stare = 1;
                break;
            case 'T':
                cout << "Ceai selectat\n";
                stare = 2;
                break;
            case 'A':
                cout << "Cappuccino selectat\n";
                stare = 3;
                break;
            case 'H':
                cout << "Ciocolata calda selectata\n";
                stare = 4;
                break;
            default:
                cout << "Selectie invalida\n";
                break;
            }
        }
        while (stare > 0 && stare < 5) {
            cout << "Apasati OK pentru confirmare\n";
            cin >> alegere;
            if (alegere == 'O') {
                if (stare == 1)
                    cout << "Cafea in preparare...\n";
                if (stare == 2)
                    cout << "Ceai in preparare...\n";
                if (stare == 3)
                    cout << "Cappuccino in preparare...\n";
                if (stare == 4)
                    cout << "Ciocolata calda in preparare...\n";
                stare = 0;
            }
            else
                cout << "Selectie invalida\n";
        }
    }

    return 0;
}