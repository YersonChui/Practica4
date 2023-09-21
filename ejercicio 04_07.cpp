// Fecha creación: 17/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 7
// Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función efectué un incremento salarial en base a la siguiente escala:

#include <iostream>
using namespace std;

void calcular_salario(double salario, double &incremento, double &nuevo_salario) {
    double porcentaje;
    if (salario < 1000){
        porcentaje = 0.2;
    }
    else if (salario >= 1000 && salario < 3000){
            porcentaje = 0.15;
    }
    else if (salario >= 3000 && salario < 6000){
            porcentaje = 0.1;
    }
    else {
    porcentaje = 0.05;
    }
    incremento = salario * porcentaje;
    nuevo_salario = salario + incremento;
}// la funcion calcula el incremento salarial y el nuevo sueldo, segun el rango ganado

int main() {
    double salario;
    double incremento;
    double nuevo_salario;

    cout << "Ingrese el salario actual del empleado: ";cin >> salario;
    calcular_salario(salario, incremento, nuevo_salario); // Llamar a la función
    cout << "El incremento salarial es: " << incremento << " Bs." << endl;
    cout << "El nuevo salario es: " << nuevo_salario << " Bs." << endl;

    return 0;
}
