// Fecha creación: 17/09/2023
// Fecha modificación: 18/09/2023
// Número de ejericio: 1
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto
#include <iostream>

using namespace std;

int es_bisiesto(int anio) {
    return (anio % 4 == 0) && !(anio % 100 == 0 && anio % 400 != 0);
}//funcion que define sies bisiesto (1)o no (0), un anio bisisesto es divisible entre 4, a menos que sea divisible por 100 y no por 400

int main() {
    int anio;
    cout << "Ingrese el anio: ";cin >> anio;
    if (es_bisiesto(anio) == 1){
        cout << "El anio " << anio << " es bisiesto." << endl;
    } else{
        cout << "El anio " << anio << " no es bisiesto." << endl;
    }
    return 0;
}

