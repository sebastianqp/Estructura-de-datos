#include <iostream>
#include <vector>

int main() {
    // Crear un vector de números
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Acceder a un elemento del vector
    std::cout << numbers[0] << std::endl;  // Imprime 1

    // Añadir un elemento al vector
    numbers.push_back(6);

    // Eliminar un elemento del vector
    numbers.erase(numbers.begin() + 2);

    // Recorrer el vector
    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}
