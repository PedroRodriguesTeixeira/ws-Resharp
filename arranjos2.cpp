#include <bits/stdc++.h>

using namespace std;

int main (){

    int M, N;

    cout << "Quantas linhas vai ter a matriz? ";
    cin >> M;
    cout << "Quantas colunas vai ter a matriz? ";
    cin >> N;

    int matriz[M][N];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl << "A matriz digitada"  << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

