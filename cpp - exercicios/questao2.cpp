#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius {0.0};
    double fahrenheit {0.0};
    double kelvin {0.0};

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "==============================" << endl;
    cout << "  Conversao de Temperatura" << endl;
    cout << "==============================" << endl;

    cout << left << setw(12) << "Celsius:"
         << right << setw(8) << celsius
         << " °C" << endl;

    cout << left << setw(12) << "Fahrenheit:"
         << right << setw(8) << fahrenheit
         << " °F" << endl;

    cout << left << setw(12) << "Kelvin:"
         << right << setw(8) << kelvin
         << " K" << endl;

    cout << "==============================" << endl;

    return 0;
}