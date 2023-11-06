#include<iostream>
#include<stdexcept>
using namespace std;
void lanzarExcepcion() {
    cout << "Funcion lanzarExcepcion" << endl;
    throw runtime_error("Excepcion lanzada en lanzarExcepcion");
}
int main() {
    try {
        cout << "En el bloque try principal" << endl;
        lanzarExcepcion();
    }
    catch (runtime_error &error) {
        cout << "Excepcion: " << error.what() << endl;
    }
    cout << "Despues de lanzarExcepcion" << endl;
    return 0;
}
