#include <iostream>
using namespace std;

int main() {
    int tempo_segundos {0};
    int horas {0};
    int minutos {0};
    int segundos {0};

    cout << "Digite o tempo em segundos: ";
    cin >> tempo_segundos;

    horas = tempo_segundos / 3600;
    minutos = (tempo_segundos % 3600) / 60;
    segundos = tempo_segundos % 60;

    cout << endl;
    cout << tempo_segundos << " segundos equivalem a: "
         << horas << "h "
         << minutos << "m "
         << segundos << "s" << endl;

    return 0;
}