#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int idade {42};
    short saldo {100};
    long long populacao {500000};
    float temperatura {3.14f};
    double velocidade {2.72};
    char letra {'A'};
    bool conectado {true};

    cout << "============================" << endl;

    cout << setw(12) << "Tipo";
    cout << setw(12) << "Valor";
    cout << setw(8) << "Bytes" << endl;

    cout << "============================" << endl;

    cout << setw(12) << "int"
         << setw(12) << idade
         << setw(8) << sizeof(idade) << endl;

    cout << setw(12) << "short"
         << setw(12) << saldo
         << setw(8) << sizeof(saldo) << endl;

    cout << setw(12) << "long long"
         << setw(12) << populacao
         << setw(8) << sizeof(populacao) << endl;

    cout << setw(12) << "float"
         << setw(12) << temperatura
         << setw(8) << sizeof(temperatura) << endl;

    cout << setw(12) << "double"
         << setw(12) << velocidade
         << setw(8) << sizeof(velocidade) << endl;

    cout << setw(12) << "char"
         << setw(12) << letra
         << setw(8) << sizeof(letra) << endl;

    cout << boolalpha;

    cout << setw(12) << "bool"
         << setw(12) << conectado
         << setw(8) << sizeof(conectado) << endl;

    cout << "==================================" << endl;

    return 0;
}