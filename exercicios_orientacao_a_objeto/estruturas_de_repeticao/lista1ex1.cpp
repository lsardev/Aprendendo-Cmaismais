#include <iostream>

using namespace std;

void determinar(int func_ano, int ano_fim, int sal_inic, float aumento);

int main(){

    int func_ano = 2005;
    int ano_fim = 2007;
    int sal_inic = 1000;
    float aumento = 1.5;
    int salary;

    determinar(func_ano, ano_fim, sal_inic, aumento);

}

void determinar(int func_ano, int ano_fim, int sal_inic, float aumento){

    for(i=func_ano; i<ano_fim; i++){
        salary += sal_inic * aumento;

        cout << "Salario: " << salary;
    }
}
