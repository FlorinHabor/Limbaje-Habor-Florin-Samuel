#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

 string A = "abc";
 string B = "xyz";
 string C = "123";


string concat( string& s1,  string& s2) {
    return s1 + s2;
}


string invers(string& s) {
    string result = s;
    reverse(result.begin(), result.end());
    return result;
}


string subst(string& s, char a, char b) {
    string result = s;
    replace(result.begin(), result.end(), a, b);
    return result;
}

int lungime(const string& s) {
    return s.length();
}

int main() {
    cout << concat(A, B) << endl;
    cout << invers(C) << endl;
    cout << subst(A, 'b', 'k') << endl;
    cout << lungime(B) << endl;

    return 0;
}