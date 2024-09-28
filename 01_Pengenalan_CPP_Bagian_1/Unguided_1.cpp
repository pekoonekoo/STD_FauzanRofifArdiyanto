#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float bilangan1, bilangan2;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
    
    cout << fixed << setprecision(2);
    
    cout << "\nHasil operasi:\n";
    cout << bilangan1 << " + " << bilangan2 << " = " << (bilangan1 + bilangan2) << endl;
    cout << bilangan1 << " - " << bilangan2 << " = " << (bilangan1 - bilangan2) << endl;
    cout << bilangan1 << " * " << bilangan2 << " = " << (bilangan1 * bilangan2) << endl;
    
    if (bilangan2 != 0) {
        cout << bilangan1 << " / " << bilangan2 << " = " << (bilangan1 / bilangan2) << endl;
    } else {
        cout << bilangan1 << " / " << bilangan2 << " = Tidak dapat melakukan pembagian dengan nol" << endl;
    }
    
    return 0;
}