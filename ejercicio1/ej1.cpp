#include <iostream>
using namespace std;
bool error = false;
int divide(int a, int b){
    if(b == 0) {
        error = true;
        return 0;
    }
    else {
        return a/b;
    }
}

int main() {
    int respuesta = divide(5 , 0);
    if(error) {
        cout << "Ocurrio un error: division por 0." << endl;
        error = false;
    } else {
        cout <<"El resultado de la division es: " << respuesta << endl;
    }
    return 0;
}