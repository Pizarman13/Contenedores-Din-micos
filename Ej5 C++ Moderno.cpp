//
// Created by Diego on 29/11/2023.
//
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <cmath>

int main() {
    auto cuadrado = [](int num) { return num * num; };

    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << std::endl;
    });

    // raiz de un numero
    auto raiz = [](int num) -> int {
    if (num < 0) {
        std::cout << "No se puede calcular la raiz de un numero negativo" << std::endl;
        return 0;
    } else {
        return sqrt(num);
    }
    };

    std::cout << "Raiz de 9: " << raiz(9) << std::endl;

    std::shared_ptr<int> ptr(new int(10));
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

    return 0;
}
