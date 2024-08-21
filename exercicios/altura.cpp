#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;

    cout << "Quantas pessoas serao digitadas: ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    for (int i = 0; i < N; ++i) {
        cout << "Dados da " << i+1 << "a" << " pessoa: " << endl;
        cout << "Digite o nome:";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Digite a idade: ";
        cin >> idade[i];
        cout << "Digite a altura: ";
        cin >> altura[i];
    }

    int contagemMenores = 0;
    for (int i = 0; i < N; ++i) {
        if(idade[i]<16){
            ++contagemMenores;
        }
    }
    double porcentagem = (contagemMenores * 100.0) / N;

    double mediaAltura = 0;
    for (int i = 0; i < N; ++i) {
        mediaAltura += altura[i];
    }
    mediaAltura = mediaAltura / N;

    cout << fixed << setprecision(2) << "A altura m'edia: " << mediaAltura << endl;
    cout << fixed << setprecision(1) << "Pessoas com menos de 16 anos : " << porcentagem << "%" << endl;
    for (int i = 0; i < N; ++i) {
        if(idade[i]< 16){
            cout << nome[i] << endl;
        }
    }

    return 0;
}