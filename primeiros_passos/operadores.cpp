#include <iostream>
using namespace std;

int n1,n2; //variaveis globais

int main(){

    int n3,n4; //variaveis locais
    int res,res2,res3;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=n1+n2;
    res2=n1/n2;
    res3=n1*n2;


    cout << "Soma das variaveis: " << res << "\n\n";
    cout << "Divisão das variaveis: " << res2 << "\n\n";
    cout << "Multiplicação das variaveis: " << res3 << "\n\n";
    return 0;
}
