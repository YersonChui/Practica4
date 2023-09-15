#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;
void imprimir(int a[], int n);
void ordenar_por_insercion(int a[], int n);
int main() {
    int n;
    cout << "Ingrese el número de elementos: ";cin >> n;
    if (n > MAX) {
            cout << "Error: el número de elementos no puede ser mayor que " << MAX << endl;
            return -1;
    }
    int a[MAX];
    cout << "Generando elementos aleatorios..." << endl;
    for (int i = 0; i < n; i++) {
    a[i] = rand() % 100;
    }
    cout << "El arreglo original es: " << endl;
    imprimir(a, n);
    cout << "Ordenando el arreglo por inserción..." << endl;
    ordenar_por_insercion(a, n);
    cout << "El arreglo ordenado es: " << endl;
    imprimir(a, n);
    return 0;
}
void imprimir(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
// funci'on para imprimir el vector
void ordenar_por_insercion(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int x = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > x) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = x;
  }
}//while revisa que mientras haya elementos mayores que x, desplazarlo a la ferecha , para luego acomodarlo en la posicion correcta
