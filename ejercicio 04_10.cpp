// Fecha creaci�n: 17/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 10
// Problema planteado:Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por.
#include <iostream>
#include <cstdlib>

using namespace std;

int N ;

// Funci�n para generar un vector de N elementos aleatorios entre 1 y 100
void generar_vector(int v[]) {
  srand((NULL));
  for (int i = 0; i < N; i++) {
    v[i] = rand() % 100 + 1;
  }
}
// Funci�n para mostrar un vector de N elementos por pantalla
void mostrar_vector(int v[]) {
  for (int i = 0; i < N; i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}
// Funci�n para ordenar un vector de N elementos por el m�todo de selecci�n
void ordenar_por_seleccion(int v[]) {
  for (int i = 0; i < N - 1; i++) {
    int min = i;
    for (int j = i + 1; j < N; j++) {
      if (v[j] < v[min]) {
        min = j;
      }
    }
    if (min != i) {
      int aux = v[i];
      v[i] = v[min];
      v[min] = aux;
    }
  }
}
// Funci�n para ordenar un vector de N elementos por el m�todo de inserci�n
void ordenar_por_insercion(int v[]) {
  for (int i = 1; i < N; i++) {
    int aux = v[i];
    int j = i - 1;
    while (j >= 0 && v[j] > aux) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = aux;
  }
}

// Funci�n para ordenar un vector de N elementos por el m�todo burbuja
void ordenar_por_burbuja(int v[]) {
  bool cambio = true;
  for (int i = 0; i < N - 1 && cambio; i++) {
    cambio = false;
    for (int j = 0; j < N - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        int aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
        cambio = true;
      }
    }
  }
}
// Funci�n para ordenar un vector de N elementos por el m�todo Shell
void ordenar_por_shell(int v[]) {
  int salto = N / 2;
  while (salto > 0) {
    bool cambio = true;
    while (cambio) {
      cambio = false;
      for (int i = salto; i < N; i++) {
        if (v[i - salto] > v[i]) {
          int aux = v[i];
          v[i] = v[i - salto];
          v[i - salto] = aux;
          cambio = true;
        }
      }
    }
    salto /= 2;
  }
}
// Funci�n para ordenar un vector de N elementos por el m�todo QuickSort
void ordenar_por_quicksort(int v[], int izq, int der) {
  int i = izq;
  int j = der;
  int pivote = v[(izq + der) / 2];
  while (i <= j) {
    while (v[i] < pivote) {
      i++;
    }
    while (v[j] > pivote) {
      j--;
    }
    if (i <= j) {
      int aux = v[i];
      v[i] = v[j];
      v[j] = aux;
      i++;
      j--;
    }
  }
  if (izq < j) {
    ordenar_por_quicksort(v, izq, j);
  }
  if (i < der) {
    ordenar_por_quicksort(v, i, der);   }
}
int main() {
  cout<<"ingrese N: ";cin>>N;
  int v[N];
  generar_vector(v);
  cout << "Vector original:\n";
  mostrar_vector(v);
  cout << "\nVector ordenado por selecci�n:\n";
  ordenar_por_seleccion(v);
  generar_vector(v);
  cout << "\nVector ordenado por inserci�n:\n";
  ordenar_por_insercion(v);
  mostrar_vector(v);
  generar_vector(v);
  cout << "\nVector ordenado por burbuja:\n";
  ordenar_por_burbuja(v);
  mostrar_vector(v);
  generar_vector(v);
  cout << "\nVector ordenado por Shell:\n";
  ordenar_por_shell(v);
  mostrar_vector(v);
  generar_vector(v);
}

