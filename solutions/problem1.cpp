#include<iostream>
using namespace std;

int main() {
   
    string row1 = "ABCDE";
    string row2 = "FGHIJ";
    string row3 = "KLMNO"; 
    string row4 = "PQRST";
    string row5 = "UVWXY";

    string mid = row3;
    int sum = 0;

    for (int i = 0; i < mid.length(); i++) {
        char c = mid[i];
        sum = sum + int(c);
    }

    cout << "Clue 1 = " << sum << endl;
    return 0;
}
