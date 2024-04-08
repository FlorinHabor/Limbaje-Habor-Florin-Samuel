#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Option {
    string name;
    int buget;
    int interes;
    int vreme;
    int accesibilitate;
    int experienta;
    int durata;

    Option(string n, int bu, int in, int vr, int ac, int exp, int dur)
        : name(n), buget(bu), interes(in), vreme(vr), accesibilitate(ac), experienta(exp), durata(dur) {}
};

double calculateTotalScore(const Option& option) {
    double totalScore = option.buget * 0.4 +
        option.interes * 0.5 +
        option.vreme * 0.3 +
        option.accesibilitate * 0.3 +
        option.experienta * 0.2 +
        option.durata * 0.1;
    return totalScore;
}

int main() {
    Option optionA("A", 2, 3, 3, 1, 3, 2);
    Option optionB("B", 3, 2, 2, 2, 2, 1);
    Option optionC("C", 1, 1, 1, 3, 2, 3);

    double scoreA = calculateTotalScore(optionA);
    double scoreB = calculateTotalScore(optionB);
    double scoreC = calculateTotalScore(optionC);

    cout << "Scorul total pentru A: " << scoreA << " - statiune la malul marii" << endl;
    cout << "Scorul total pentru B: " << scoreB << " - excursie in munti" << endl;
    cout << "Scorul total pentru C: " << scoreC << " - calatorie intr-un oras istoric" << endl;

    string bestOption;
    if (scoreA > scoreB && scoreA > scoreC) {
        bestOption = "A";
    }
    else if (scoreB > scoreA && scoreB > scoreC) {
        bestOption = "B";
    }
    else {
        bestOption = "C";
    }

    cout << "Optiunea cea mai favorabila este: " << bestOption << endl;

    return 0;
}