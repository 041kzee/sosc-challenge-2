#include <iostream>
using namespace std;

int main() {
    string s = "soscchallenge";
    string rev = "";       

    //reverse
    for (int i = s.length() - 1; i >= 0; i--) {
        rev = rev + s[i];
    }

    string filtered = ""; 
    for (int i = 0; i < rev.length(); i++) {
        if ((i + 1) % 3 != 0) {
            filtered = filtered + rev[i];
        }
    }

    string shifted = "";   
    for (int i = 0; i < filtered.length(); i++) {
        char c = filtered[i];
        c = c + 2;
        shifted = shifted + c;
    }

    int vowelCount = 0;   
    for (int i = 0; i < shifted.length(); i++) {
        char c = shifted[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            vowelCount = vowelCount + 1;
        }
    }

    cout << "Clue 2 = " << vowelCount << endl;
    return 0;
}
