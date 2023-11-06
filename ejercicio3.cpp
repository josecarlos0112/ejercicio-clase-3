#include<iostream>
using namespace std;

int funcionA();
int funcionB();
int funcionC();

int main(){
    try{
        int excep= funcionA();
        cout<< "Resultado en la funcion principal: "<<excep<<std::endl;
    } catch (int e) {
        cerr<< "Excepcion atrapada en la funcion principal: "<<e<<std::endl;
    }
    return 0;
}

int funcionC(){
    throw 33;
}

int funcionB(){
    return funcionC();
}

int funcionA(){
    return funcionB();
}