#include <bits/stdc++.h>

using namespace std;

int main() {

    int num1, num2, num3;

    cout << endl << "Algoritmo buscador do menor numero" << endl;
    cout << "Primeiro valor: ";
    cin >> num1;
    cout << "Segundo valor: ";
    cin >> num2;
    cout << "Terceiro valor: ";
    cin >> num3;

    if(num1 < num2 && num1 < num3){
        cout << "Menor = " << num1;
    } else if(num2 < num3){
        cout << "Menor = " << num2;
    } else cout << "Menor = " << num3;


    return 0;
}
