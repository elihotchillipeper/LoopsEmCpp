#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Digite um número para receber sua tabuada: ";
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num*i <<std::endl;

    }

    return 0;
}