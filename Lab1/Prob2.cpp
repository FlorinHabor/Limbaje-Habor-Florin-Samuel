#include <iostream>
#include <string.h>

using namespace std;
void concat(string a, string b){
    cout << b << a <<endl;
}
void repeat(string a, int n){
    for(int i=0;i<n;i++) {
        cout<<a;
    }
    cout <<endl;
}
void inverse(string a){
    int i=0;
    while(a[i] != NULL) {
        i++;
    }
    for(i; i>=0;i--){
        cout << a[i]; 
    }
    cout << endl;
}
string extract(const string& s, int i, int j) {
    if (!(i < 0 || j >= s.length() || i > j)) {
        cout << s.substr(i, j - i + 1) << endl;
    }
}
void replace(const string& s, const string& sub, const string& new_sub) {
    string result = s;
    size_t pos = result.find(sub); 
    if (pos != std::string::npos) { 
        result.replace(pos, sub.length(), new_sub); 
    }
    cout << result;
}
int main(){
    string A = "0123456789";
    string B = "abcdefghijk";
    string C = "x1y1x2y2x3y3x4y4x5y5";
    concat(A,B);
    repeat(A,5);
    inverse(A);
    extract(B,2,6);
    replace(B,"cde","xyz");
}
