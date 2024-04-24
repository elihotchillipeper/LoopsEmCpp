#include <iostream>
using namespace std;

int main(){
    int num, fat = 1;

    cout << "Digite um núemro para calcular o fatorial: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        fat *= i;
    }

    cout << "O fatorial de " << num << " é: " << fat <<std::endl;

    return 0;
}