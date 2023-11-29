//
// Created by Diego on 29/11/2023.
//
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};
    numeros.push_back(60);
    numeros.push_back(70);
    numeros.push_back(80);

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
