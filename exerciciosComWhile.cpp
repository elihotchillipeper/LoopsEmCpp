#include <iostream>
using namespace std;

int exe1(){

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