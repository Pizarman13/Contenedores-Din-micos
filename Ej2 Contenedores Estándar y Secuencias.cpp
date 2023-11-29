//
// Created by Diego on 29/11/2023.
//
#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    lista.push_back(6.6); // Añade al final de la lista
    std::stack<float, std::list<float>> pila(lista);

    while(!pila.empty()) {

        std::cout << "Parte superior de la pila: " << pila.top() << std::endl;
        pila.pop(); // Elimina el elemento de la parte superior de la pila

    }

    return 0;
}
