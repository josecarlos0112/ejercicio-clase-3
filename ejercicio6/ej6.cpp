#include <iostream>
#include <stdexcept>
void excepcion() {
    throw std::runtime_error("Error en la funcion excepcion");
}
int main() {
    excepcion();
    return 0;
}

