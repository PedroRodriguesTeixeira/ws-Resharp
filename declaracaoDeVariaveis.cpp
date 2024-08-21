#include <iostream>
#include <iomanip> //biblioteca para formatar o numero de casas decimais
#include <string> // biblioteca que permite usar funccoes de manipulacoes de texto

using namespace std;

int main(){

    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'f';
    nome = "Maria Silva";

    cout << fixed << setprecision(2);
    cout << "IDADE = " << idade << endl;
    cout << "SALARIO = " << salario << endl;
    cout << "ALTURA = " << altura << endl;
    cout << "GENERO = " << genero << endl;
    cout << "NOME = " << nome << endl;



}
