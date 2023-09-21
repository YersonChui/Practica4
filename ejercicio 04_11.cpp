// Fecha creaci�n: 17/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 11
// Problema planteado: Realice una funci�n que envi�ndole dos numero calcule el m�ximo com�n divisor con el algoritmo de Euclides.
#include <iostream>
using namespace std;

// Funci�n que calcula el mcd de dos n�meros usando un ciclo while
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



