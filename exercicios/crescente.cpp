#include <bits/stdc++.h>
using namespace std;

int main() {

    int num1, num2;

    num1 = 2;
    num2 = 1;
    while(num1 != num2){
    cout << "Digite dois numeros: ";
    cin >> num1 >> num2;
    if(num1 > num2){
        cout << "DECRESCENTE!\n";
    } else if (num1 < num2) cout << "CRESCENTE!\n";
    }


    return 0;
}
