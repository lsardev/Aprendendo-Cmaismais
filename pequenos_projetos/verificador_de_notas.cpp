#include <iostream>

using namespace std;

int main(){

    string aluno_nome;
    float notat1, notat2, notap1, notap2;
    float nota_total;

    cout << "Qual e o nome do aluno: ";
    cin >> aluno_nome;

    cout << "Digite a nota T1 do aluno";
    cin >> notat1;

    cout << "Digite a nota P1 do aluno";
    cin >> notap1;

    cout << "Digite a nota T2 do aluno";
    cin >> notat2;

    cout << "Digite a nota P2 do aluno";
    cin >> notap2;

    nota_total = (notat1 + notat2 / 2)*0.4 + (notap1 + notap2 / 2)*0.6;

    if(nota_total < 6){
            cout << "O aluno " << aluno_nome << " NAO passou de ano" << "\n\n";
    }else{
            cout << "O aluno " << aluno_nome << " passou de ano" << "\n\n" ;
    }

    return 0;
}
