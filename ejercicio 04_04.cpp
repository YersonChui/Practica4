// Fecha creación: 17/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 4
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones. La
// entrada de valores es para las calificaciones, debe hacerlo mediante una función.
#include <iostream>
using namespace std;

int pedir_calificacion() {
    int calificacion;
    cout << "Ingrese una calificacion: ";cin >> calificacion;
    while (calificacion < 1 , calificacion > 100) {
            cout << "Calificacion invalida. Ingrese una calificacion entre 1 y 100: ";cin >> calificacion;
    }
    return calificacion;
}//Esta funcion pide la calificacion y la convalida si esta o no en el rango 1-100

int main() {
    int n;
    int suma = 0;
    double promedio;
    cout << "Ingrese el numero de calificaciones: ";cin >> n;// Solicitar calificaciones a la función pedir_calificacion
    for (int i = 0; i < n; i++) {
            int c = pedir_calificacion(); // jala una calificacio
            suma += c;
    }
    promedio = (double) suma / n;
    cout << "La sumatoria de las " << n << " calificaciones es: " << suma << endl;
    cout << "El promedio de las " << n << " calificaciones es: " << promedio << endl;
    return 0;
}
