#include <iostream>
#include <cstdlib>
using namespace std;

void imprimir(int a[], int n);
void ordenar_por_burbuja(int a[], int n);

const int MAX = 100;

int main() {
  int n;
  cout << "Ingrese el numero de elementos: ";cin >> n;
  if (n > MAX) {
    cout << "Error: el numero de elementos no puede ser mayor que " << MAX << endl;
    return -1;
  }
  int a[MAX];
  cout << "Generando elementos aleatorios..." << endl;
  for (int i=0; i<n; i++) {
    a[i] = rand() % 100;
  }
  cout << "El vector original es: " << endl;
  imprimir(a, n);
  cout << "Ordenando el vector por el método de la burbuja..." << endl;
  ordenar_por_burbuja(a, n);
  cout << "El vector ordenado es: " << endl;
  imprimir(a, n);
  return 0;
  //numero random
}
void imprimir(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}//funcion para imprimir el arreglo
void ordenar_por_burbuja(int a[], int n) {
  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]){
        int x = a[j];
        a[j] = a[j + 1];
        a[j + 1] = x;
      }
    }
  }// desdeel inicio hasta el penultimo , (j)luego inicio hasta el no ordenado, va revisando si el actual es mayor al que le sigue
}
