#include <iostream>
using namespace std;

// check number is prime
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {2, 7, 10, 11, 13, 4, 5};
    int n = 7; 
    int countFinal = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (x % 2 == 0) {
            
            countFinal = countFinal + 1;
        } 
        else if (isPrime(x)) {
           
            countFinal = countFinal + 1;
        } 
        else {
            
        }
    }

    cout << "Clue 3 = " << countFinal << endl;
    return 0;
}
