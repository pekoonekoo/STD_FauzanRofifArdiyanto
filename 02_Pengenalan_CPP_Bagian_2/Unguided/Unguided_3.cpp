#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <numeric>

std::vector<double> input_array() {
    std::string input;
    std::vector<double> arr;
    std::cout << "Masukkan nilai array (pisahkan dengan spasi): ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    double num;
    while (iss >> num) {
        arr.push_back(num);
    }
    return arr;
}

double nilai_maksimum(const std::vector<double>& arr) {
    return *std::max_element(arr.begin(), arr.end());
}

double nilai_minimum(const std::vector<double>& arr) {
    return *std::min_element(arr.begin(), arr.end());
}

double nilai_rata_rata(const std::vector<double>& arr) {
    return std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}

int main() {
    std::vector<double> array;
    std::string pilihan;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Input array\n";
        std::cout << "2. Cari nilai maksimum\n";
        std::cout << "3. Cari nilai minimum\n";
        std::cout << "4. Hitung nilai rata-rata\n";
        std::cout << "5. Keluar\n";
        
        std::cout << "Pilih menu (1-5): ";
        std::getline(std::cin, pilihan);
        
        if (pilihan == "1") {
            array = input_array();
            std::cout << "Array berhasil diinput.\n";
        } else if (pilihan == "2") {
            if (!array.empty()) {
                std::cout << "Nilai maksimum: " << nilai_maksimum(array) << std::endl;
            } else {
                std::cout << "Array kosong. Silakan input array terlebih dahulu.\n";
            }
        } else if (pilihan == "3") {
            if (!array.empty()) {
                std::cout << "Nilai minimum: " << nilai_minimum(array) << std::endl;
            } else {
                std::cout << "Array kosong. Silakan input array terlebih dahulu.\n";
            }
        } else if (pilihan == "4") {
            if (!array.empty()) {
                std::cout << "Nilai rata-rata: " << nilai_rata_rata(array) << std::endl;
            } else {
                std::cout << "Array kosong. Silakan input array terlebih dahulu.\n";
            }
        } else if (pilihan == "5") {
            std::cout << "Terima kasih telah menggunakan program ini.\n";
            break;
        } else {
            std::cout << "Pilihan tidak valid. Silakan pilih 1-5.\n";
        }
    }

    return 0;
}