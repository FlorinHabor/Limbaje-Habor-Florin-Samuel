#include <iostream>
#include <string>
using namespace std;

void generateStrings(string s, int iterations) {
    if (iterations == 0) {
        cout << s << endl;
        return;
    }

    generateStrings("a" + s + "a", iterations - 1);
    generateStrings("b" + s + "b", iterations - 1);
    if (iterations == 3) {
        generateStrings("aa", iterations - 1);
        generateStrings("bb", iterations - 1);
    }
}

int main() {
    int iterations = 3;
    cout << "Iteratia 1:" << endl;
    generateStrings("a", 0);
    generateStrings("b", 0);
    generateStrings("", 1);
    cout << "Iteratia 2:" << endl;
    generateStrings("", 2);
    cout << "Iteratia 3:" << endl;
    generateStrings("", 3);

    return 0;
}