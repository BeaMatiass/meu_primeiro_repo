#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor_hora {0.0};
    double horas_trabalhadas {0.0};
    double salario_bruto {0.0};
    double inss {0.0};
    double irrf {0.0};
    double sindicato {0.0};
    double vale_transporte {0.0};
    double total_descontos {0.0};
    double salario_liquido {0.0};
    double fgts {0.0};

    cout << "Digite o valor da hora de trabalho: ";
    cin >> valor_hora;

    cout << "Digite a quantidade de horas trabalhadas no mes: ";
    cin >> horas_trabalhadas;

    salario_bruto = valor_hora * horas_trabalhadas;
    inss = salario_bruto * 0.11;
    irrf = salario_bruto * 0.15;
    sindicato = salario_bruto * 0.01;
    vale_transporte = salario_bruto * 0.06;
    total_descontos = inss + irrf + sindicato + vale_transporte;
    salario_liquido = salario_bruto - total_descontos;
    fgts = salario_bruto * 0.08;

    cout << fixed << setprecision(2);

    cout << endl;

    cout << left << setw(28) << "Salario Bruto:"
         << "R$ " << right << setw(8) << salario_bruto << endl;

    cout << left << setw(28) << "(-) INSS (11%):"
         << "R$ " << right << setw(8) << inss << endl;

    cout << left << setw(28) << "(-) IRRF (15%):"
         << "R$ " << right << setw(8) << irrf << endl;

    cout << left << setw(28) << "(-) Sindicato (1%):"
         << "R$ " << right << setw(8) << sindicato << endl;

    cout << left << setw(28) << "(-) Vale Transporte (6%):"
         << "R$ " << right << setw(8) << vale_transporte << endl;

    cout << "========================================" << endl;

    cout << left << setw(28) << "Total de Descontos:"
         << "R$ " << right << setw(8) << total_descontos << endl;

    cout << left << setw(28) << "Salario Liquido:"
         << "R$ " << right << setw(8) << salario_liquido << endl;

    cout << "========================================" << endl;

    cout << left << setw(28) << "FGTS Recolhido (8%):"
         << "R$ " << right << setw(8) << fgts << endl;

    return 0;
}