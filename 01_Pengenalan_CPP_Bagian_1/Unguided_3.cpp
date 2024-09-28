#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void generatePattern(int n) {
    cout << "input: " << n << endl;
    cout << "output:" << endl;

    
    for (int i = n; i > 0; i--) {
        
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        cout << " * ";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        cout << endl;
    }
    
    cout << string(n, ' ') << "*" << endl;
}

int main() {
    int input;
    
    cout << "Masukkan sebuah angka: ";
    cin >> input;
    
    if (input <= 0) {
        cout << "Mohon masukkan angka positif." << endl;
        return 1;
    }
    
    generatePattern(input);
    
    return 0;
}