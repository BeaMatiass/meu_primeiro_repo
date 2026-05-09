#include <iostream>
using namespace std;

int main() {
    int numero {0};
    int milhar {0};
    int centena {0};
    int dezena {0};
    int unidade {0};

    cout << "Digite um numero de 4 digitos: ";
    cin >> numero;

    milhar = numero / 1000;
    centena = (numero / 100) % 10;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    cout << endl;

    cout << "Digito 1 (milhar):  " << milhar << endl;
    cout << "Digito 2 (centena): " << centena << endl;
    cout << "Digito 3 (dezena):  " << dezena << endl;
    cout << "Digito 4 (unidade): " << unidade << endl;

    return 0;
}