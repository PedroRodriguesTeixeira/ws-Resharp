#include <bits/stdc++.h>

using namespace std;

int main() {

    int num1, num2;

    cout << endl << "Algoritmo de soma impares" << endl;
    cout << "Digite dois numeros: ";
    cin >> num1 >> num2;
    int aux;
    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    int soma = 0;
    for (int i = num1+1; i < num2; ++i) {
        if(i%2!=0){
            soma += i;
        }
    }
    cout << "SOMA DOS IMPARES = " << soma;



    return 0;
}
