#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;

    cout << "Algoritmo da diagonal negativa" << endl;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int matriz[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Diagonal principal: ";
    for (int i = 0; i < N; ++i) {
        cout << matriz[i][i] << "  ";
    }

    int contadoNegativos = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(matriz[i][j]<0){
               contadoNegativos++;
            }
        }
    }
    cout << endl << "Quantidade de negativos = " << contadoNegativos << endl;


    return 0;
}
