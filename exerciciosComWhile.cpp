#include <iostream>
using namespace std;

int exe1(){

    //Escreva um programa que solicita ao usuário que insira um número e imprime todos os números pares entre 1 e o número inserido.

    int n, i = 0, o=1;

    cout << "Digite um número: ";
    cin >> n;

    while(i <= n && i %2 == 0){
        cout << i <<std::endl;
        i++;
        i++;
    }

    cout << " " << std::endl;

    return 0;
}

int exe2(){

    //Escreva um programa que calcula a soma dos dígitos de um número inteiro inserido pelo usuário.

    int n, i=1, soma;

    cout << "Digite um número: ";
    cin >> n;

    while(i<=n){
        soma += i;
        i++;
    }
    cout << soma <<std::endl;



    return 0;
}

int exe3(){

    //Escreva um programa que imprime a sequência de Fibonacci até o n-ésimo termo, onde o valor de n é inserido pelo usuário.

    int n, i=1, t1=0, t2=1, result;

    cout << "Digite um número: ";
    cin >> n;
    cout << t1 << " " << t2 << " ";

    while(i<n){
        int result = t1 + t2;
        cout << result << " ";
        t1 = t2;
        t2 = result;
        i++ ;
    }

    cout <<std::endl;

    return 0;
}









int main(){
    //exe1();
    //exe2();
    exe3();
}