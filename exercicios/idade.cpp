#include <bits/stdc++.h>


using namespace std;

int main() {

    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << endl << "Media de idades" << endl;

    cout << "Digite os nome da primeria pessoa: ";
    getline(cin, nome1);
    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;

    cout << "Digite os nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;

    media = (double) (idade1 + idade2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos " << endl;


    return 0;
}
