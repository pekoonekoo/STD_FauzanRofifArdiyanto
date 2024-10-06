#include <iostream>
#include <vector>

std::vector<std::vector<std::vector<int>>> input_3d_array() {
    int x, y, z;
    std::cout << "Masukkan jumlah dimensi pertama: ";
    std::cin >> x;
    std::cout << "Masukkan jumlah dimensi kedua: ";
    std::cin >> y;
    std::cout << "Masukkan jumlah dimensi ketiga: ";
    std::cin >> z;

    std::vector<std::vector<std::vector<int>>> array_3d(x, std::vector<std::vector<int>>(y, std::vector<int>(z)));

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                std::cout << "Masukkan nilai untuk posisi [" << i << "][" << j << "][" << k << "]: ";
                std::cin >> array_3d[i][j][k];
            }
        }
    }

    return array_3d;
}

void print_3d_array(const std::vector<std::vector<std::vector<int>>>& array) {
    for (const auto& arr_2d : array) {
        for (const auto& arr_1d : arr_2d) {
            for (int val : arr_1d) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

int main() {
    auto array_3d = input_3d_array();
    std::cout << "\nArray 3D yang dimasukkan:\n";
    print_3d_array(array_3d);
    return 0;
}