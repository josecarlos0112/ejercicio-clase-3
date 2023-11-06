#include <iostream>
#include <stdexcept>

int divideException(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("División por cero");
    }
    else {
        return a / b;
    }
}

int main() {
    // Uso de la versión que lanza una excepción
    try {
        int resultException = divideException(5, 0);
        std::cout << "Resultado de la división: " << resultException << std::endl;
    }
    catch (const std::invalid_argument &e) {
        std::cerr << "Excepción: " << e.what() << std::endl;
    }


    return 0;
}