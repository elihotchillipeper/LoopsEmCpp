#include <iostream>
using namespace std;

int exeFor1(){

    //Escreva um programa que imprime todos os números ímpares entre dois números inseridos pelo usuário.

    int n1, n2;

    cout << "Digite dois números: ";
    cin >> n1 >> n2;

    for(int i = n1; i >= n1 && i <= n2; i++){
        cout << i <<std::endl;
        i++;
    }

    cout << " " <<std::endl;

    return 0;
}


int exeFor2(){

    //Escreva um programa que verifica se um número inserido pelo usuário é primo ou não.

    int num, primo;

    cout << "Digite um número e descubra se é primo ou não: ";
    cin >> num;

    for(int i = 2; i <= num/2; i++){
        if(num %i == 0){
            primo++;
        }
    if(primo == 0){
        cout << "É primo." <<std::endl;
    } else {
        cout << "Não é primo." <<std::endl;
    }

    }


    return 0;
}




int exeFor3(){

    //Escreva um programa que imprime um padrão de asteriscos (*), onde o número de linhas é inserido pelo usuário.

    int linhas;

    cout << "Digite um número de linhas: ";
    cin >> linhas;

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j<= i; j++){
            cout << "*" <<std::endl;
        }
    }
    cout << " " << std::endl;

    return 0;
}




int main(){
    //exeFor1();
    //exeFor2();
    exeFor3();

}




