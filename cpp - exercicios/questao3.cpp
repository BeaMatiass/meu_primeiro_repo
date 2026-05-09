#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     double velocidade_kmh {0.0};
    double velocidade_ms {0.0};
    double velocidade_mph {0.0};

    cout << "Digite a velocidade em km/h: ";
    cin >> velocidade_kmh;

    velocidade_ms = velocidade_kmh / 3.6;
    velocidade_mph = velocidade_kmh * 0.6215;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "==============================" << endl;
    cout << "  Conversao de Velocidade" << endl;
    cout << "==============================" << endl;

    cout << left << setw(8) << "km/h:";
    cout << right << setw(12) << velocidade_kmh << endl;

    cout << left << setw(8) << "m/s:";
    cout << right << setw(12) << velocidade_ms << endl;

    cout << left << setw(8) << "mph:";
    cout << right << setw(12) << velocidade_mph << endl;

    cout << "==============================" << endl;

    return 0;
}