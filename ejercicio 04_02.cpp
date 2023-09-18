// Fecha creación: 17/09/2023
// Fecha modificación: 18/09/2023
// Número de ejericio: 2
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.
#include <iostream>
using namespace std;

int calcular_edad(int dia_actual, int mes_actual, int anio_actual, int dia_nac, int mes_nac, int anio_nac) {
    int edad;
    edad = anio_actual - anio_nac;
    if (mes_actual<mes_nac) {
        edad--;
    }
    if (mes_actual == mes_nac && dia_actual < dia_nac) {
        edad--;
    }
    return edad;
}//la funcion resta las dos fechas, almacenando dia, mes, anio actual y de nacimiento, devolviendo este la edad

int main() {
    int dia_actual, mes_actual, anio_actual, dia_nac, mes_nac, anio_nac;
    cout << "Ingrese la fecha actual (dd/mm/aaaa): ";cin >> dia_actual >> mes_actual >> anio_actual;
    cout << "Ingrese la fecha de nacimiento (dd/mm/aaaa): ";cin >> dia_nac >> mes_nac >> anio_nac;
    cout << "La edad es: " << calcular_edad(dia_actual, mes_actual, anio_actual, dia_nac, mes_nac, anio_nac) << " años." << endl;
    return 0;
}

