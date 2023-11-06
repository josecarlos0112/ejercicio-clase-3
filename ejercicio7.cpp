#include<iostream>
#include<stdexcept>
#include<fstream>

void escribeEnArchivo(std::ofstream& file) {
    if (!file.is_open()) {
throw std::runtime_error("No se puede escribir en el archivo cerrado. ");
}
    file << "Hola mundo.";
    std::cout<<"Escribiendo en el archivo..." <<std::endl;
}

int main() {
    std::ofstream file("archivo.txt");

    if (file.is_open()){
        std::cout<<"El archivo se abrio correctamente. "<<std::endl;
    } else{
        std::cerr<<"Error al abrir el archivo. "<<std::endl;
        return 1;
    }

    try{
        file.close();
        std::cout<<"Archivo cerrado antes de escribir. "<<std::endl;

        escribeEnArchivo(file);
    } catch (const std::runtime_error& e){
        std::cerr<<"Excepcion capturada. "<<e.what()<<std::endl;
    }

    if (file.is_open()){
        file.close();
        std::cout<<"Cerrando el archivo. "<<std::endl;
    }

    std::cout<<"Fin del programa. "<<std::endl;
    return 0;
}