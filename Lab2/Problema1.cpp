#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPal(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

void generatePal(int length, string prefix = "") {
    if (length == 0) {
        if (isPal(prefix)) {
            cout << prefix << endl;
        }
        return;
    }

    for (char c : {'0', '1', '2'}) {
        string newPrefix = prefix + c;
        generatePal(length - 1, newPrefix);
    }
}

int main() {
    for (int i = 1; i <= 5; ++i) {
        generatePal(i);
    }
    return 0;
}