#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string input;
    std::vector<int> data, genap, ganjil;

    // Input data dari user
    std::cout << "Masukkan data array (pisahkan dengan spasi): ";
    std::getline(std::cin, input);
    
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        data.push_back(num);
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }

    // Tampilkan output
    std::cout << "Data Array : ";
    for (int i : data) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap : ";
    for (size_t i = 0; i < genap.size(); ++i) {
        std::cout << genap[i];
        if (i < genap.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (size_t i = 0; i < ganjil.size(); ++i) {
        std::cout << ganjil[i];
        if (i < ganjil.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    return 0;
}