#include <iostream>
#include <cstdlib>

using namespace std;

void numrandom(int arr[], int n);
void imprimir(int arr[], int n);
void ordenarporseleccion(int arr[], int n);
int minimo(int arr[], int i, int j);

int main()
{
    int n;
    cout << "Ingrese el numero de elementos a generar y ordenar: ";cin >> n;
    int arr[n];
    numrandom(arr, n);
    cout << "Los numeros generados son: " << endl;
    imprimir(arr, n);
    ordenarporseleccion(arr, n);
    cout << "Los numeros ordenados son: " << endl;
    imprimir(arr, n);
    return 0;
}
void numrandom(int arr[], int n)
{
    for (int i=0; i<n; i++){
        arr[i] = rand() % 100+1;
    }
}
//genera los numeros random
void imprimir(int arr[],int n)
{
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// imprime el vector
void ordenarporseleccion(int arr[],int n)
{
    for (int i=0; i<n - 1; i++){
        int min = minimo(arr, i, n-1);
        if (min != i){//
            int x = arr[i];
            arr[i] = arr[min];
            arr[min] = x;
        }
    }
}
// con min busca el numero menoor de i hasta n-1
//el if define que si el minimo no esta laposicion i no es la menor se intercambia de posicion
int minimo(int arr[], int i, int j)
{
    int min = i;
    for (int k=i + 1; k<=j; k++){
        if (arr[k] < arr[min])
        {
            min = k;
        }
    }
    return min;
}
//ya se asume que i es el menor
// con el if si se encuentra otro menor, actualiza el vector
