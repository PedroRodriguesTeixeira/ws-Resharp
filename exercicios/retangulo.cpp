#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main () {

    double base, altura, area, perimetro, diagonal;

    cout << endl << "Algoritmo do Retangulo" << endl;
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2.0*(base+altura);
    diagonal = sqrt((base * base) + (altura * altura));

    cout << fixed << setprecision(4);
    cout << area << endl;
    cout << perimetro << endl;
    cout << diagonal << endl;



    return 0;
}
