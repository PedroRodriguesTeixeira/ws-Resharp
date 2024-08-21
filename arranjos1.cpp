#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){

    int N;

    cout << "Quantos numreos voce vai digitar?";
    cin >> N;

    double vet[N];

    for (int j = 0; j < N; ++j) {
        cout << "Digite um numero: ";
        cin >> vet[j];
    }
    cout << endl << "Numeros digitados: " << endl;
    cout << fixed << setprecision(1);
    for (int j = 0; j < N; ++j) {
        cout << vet[j] << endl;
    }



    return 0;
}


