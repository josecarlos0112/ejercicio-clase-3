#include <iostream>
#include <stdexcept>

int divideError(int a, int b) {
    if (b == 0) {
        return -1;
    }
   else {
        return a / b;
    }
}

int main (){
    int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::cerr << "Error: Division por cero." << std::endl;
    }
    else {
        std::cout << "El resultado es: " << resultError << std::endl;
    }
    return 0;
}