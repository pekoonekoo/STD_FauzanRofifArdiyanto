#include <iostream>
#include <string>
using namespace std;

string konversiSatuan(int angka) {
    switch(angka) {
        case 0: return "nol";
        case 1: return "satu";
        case 2: return "dua";
        case 3: return "tiga";
        case 4: return "empat";
        case 5: return "lima";
        case 6: return "enam";
        case 7: return "tujuh";
        case 8: return "delapan";
        case 9: return "sembilan";
        default: return "";
    }
}

string konversiBelasan(int angka) {
    if (angka == 10) return "sepuluh";
    if (angka == 11) return "sebelas";
    return konversiSatuan(angka - 10) + " belas";
}

string konversiPuluhan(int angka) {
    int puluhan = angka / 10;
    int sisa = angka % 10;
    
    if (puluhan == 1) {
        return konversiBelasan(angka);
    } else {
        string hasil = konversiSatuan(puluhan) + " puluh";
        if (sisa != 0) {
            hasil += " " + konversiSatuan(sisa);
        }
        return hasil;
    }
}

string konversiAngkaKeTulisan(int angka) {
    if (angka == 100) return "seratus";
    if (angka < 10) return konversiSatuan(angka);
    if (angka < 20) return konversiBelasan(angka);
    return konversiPuluhan(angka);
}

int main() {
    int angka;
    
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    
    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100." << endl;
    } else {
        cout << "Hasil konversi: " << konversiAngkaKeTulisan(angka) << endl;
    }
    
    return 0;
}