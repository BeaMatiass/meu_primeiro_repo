#include <iostream>
using namespace std;

int main() {
    int numero {0};
    int centena {0};
    int dezena {0};
    int unidade {0};
    int invertido {0};

    cout << "Digite um numero de 3 digitos: ";
    cin >> numero;

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;
    invertido = unidade * 100 + dezena * 10 + centena;

    cout << endl;

    cout << "Numero original:  " << numero << endl;
    cout << "Numero invertido: " << invertido << endl;

    return 0;
}