#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Digite um número (digite um número negativo para sair): ";
    cin >> numero;

    while(numero >= 0){
        cout << "Você digitou " << numero << std::endl;
        cout << "Digite outro número (digite um número negativo para sair): ";
        cin >> numero;
    }

    cout << "Programa encerrado." << std::endl;


    return 0;
}