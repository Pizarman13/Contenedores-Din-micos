//
// Created by Diego on 29/11/2023.
//
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    numeros.push_back(70);
    numeros.push_back(20);
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Numero maximo: " << maxNum << std::endl;

    int minNum = *std::min_element(numeros.begin(), numeros.end());
    std::cout << "Numero minimo: " << minNum << std::endl;

    return 0;
}
