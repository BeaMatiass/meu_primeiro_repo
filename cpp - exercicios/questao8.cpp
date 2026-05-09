#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double resistencia {0.0};
    double tensao {0.0};
    double tempo {0.0};
    double corrente {0.0};
    double potencia {0.0};
    double energia {0.0};

    cout << "Digite a resistencia (ohms): ";
    cin >> resistencia;

    cout << "Digite a tensao (volts): ";
    cin >> tensao;

    cout << "Digite o tempo (horas): ";
    cin >> tempo;

    corrente = tensao / resistencia;
    potencia = tensao * corrente;
    energia = (potencia * tempo) / 1000.0;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "========================================" << endl;
    cout << "           Circuito Eletrico" << endl;
    cout << "========================================" << endl;

    cout << left << setw(22) << setfill('.') << "Resistencia"
         << setfill(' ') << right << setw(8) << resistencia << " ohms" << endl;

    cout << left << setw(22) << setfill('.') << "Tensao"
         << setfill(' ') << right << setw(8) << tensao << " V" << endl;

    cout << left << setw(22) << setfill('.') << "Corrente"
         << setfill(' ') << right << setw(8) << corrente << " A" << endl;

    cout << left << setw(22) << setfill('.') << "Potencia"
         << setfill(' ') << right << setw(8) << potencia << " W" << endl;

    cout << left << setw(22) << setfill('.') << "Tempo"
         << setfill(' ') << right << setw(8) << tempo << " h" << endl;

    cout << left << setw(22) << setfill('.') << "Energia consumida"
         << setfill(' ') << right << setw(8) << energia << " kWh" << endl;

    cout << "========================================" << endl;

    return 0;
}