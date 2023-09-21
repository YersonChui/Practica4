// Fecha creación: 17/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 11
// Problema planteado: Realice una función que enviándole dos numero calcule el máximo común divisor con el algoritmo de Euclides.
#include <iostream>
using namespace std;

// Función que calcula el mcd de dos números usando un ciclo while
int mcd(int a, int b) {
    while (b != 0) {
        int temporal = b;
        b = a %b;
        a = temporal;
    }
    return a;
}// calcula el mcd (con while), hasta que b sea 0
int main() {
    int a,b;
    cout << "Ingrese a; ";cin >> a;
    cout << "Ingrese b: ";cin >> b;
    // Llama las funciones
    double maxcom = mcd(a,b);
    cout << "el maxcimo comun divisor es: " << maxcom << endl;
    return 0;
}



