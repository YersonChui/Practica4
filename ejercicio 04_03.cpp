// Fecha creación: 17/09/2023
// Fecha modificación: 18/09/2023
// Número de ejericio: 3
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el
// de los pesos. (realizar con estructuras)
#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float estatura;
    float peso;
};// estructura que presenta los datos de la persona

// Función que lee los datos de una persona por teclado y los almacena en una estructura
void leer_persona(Persona&p) {

    cout << "Ingrese el nombre: ";cin >> p.nombre;
    cout << "Ingrese la edad: ";cin >> p.edad;
    cout << "Ingrese la estatura: ";cin >> p.estatura;
    cout << "Ingrese el peso: ";cin >> p.peso;
}// funcion que lee a la persona

// Función que muestra los datos de una persona por pantalla
void mostrar_persona(Persona p) {
    // Mostrar el nombre de la persona
    cout << "Nombre: " << p.nombre << endl;
    // Mostrar la edad de la persona
    cout << "Edad: " << p.edad << endl;
    // Mostrar la estatura de la persona
    cout << "Estatura: " << p.estatura << endl;
    // Mostrar el peso de la persona
    cout << "Peso: " << p.peso << endl;
}

// Función que calcula el promedio de un arreglo de números reales
float promedio(float arr[], int n) {
    // Declarar una variable para almacenar la suma de los elementos del arreglo
    float suma = 0;
    // Recorrer el arreglo y sumar cada elemento a la variable suma
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    // Devolver la suma dividida entre el número de elementos del arreglo
    return suma / n;
}

int main() {
    // Declarar una constante para representar el número de personas
    const int N = 12;
    // Declarar un arreglo de estructuras para almacenar los datos de las personas
    Persona personas[N];
    // Declarar un arreglo para almacenar las estaturas de las personas
    float estaturas[N];
    // Declarar un arreglo para almacenar los pesos de las personas
    float pesos[N];

    // Recorrer el arreglo de personas y leer los datos por teclado para cada una
    for (int i = 0; i < N; i++) {
        cout << "Ingrese los datos de la persona " << i + 1 << ":" << endl;
        leer_persona(personas[i]);
        // Almacenar la estatura y el peso en los arreglos correspondientes
        estaturas[i] = personas[i].estatura;
        pesos[i] = personas[i].peso;
        cout << endl;
    }
    int indice_menor = 0;
     for (int i = 1; i < N; i++) {
         if (personas[i].edad < personas[indice_menor].edad) {
             indice_menor = i;
         }
     }
     cout << "El nombre de la persona de menor edad es: " << personas[indice_menor].nombre << endl;
     cout << "El promedio de las estaturas es: " << promedio(estaturas, N) << endl;
     cout << "El promedio de los pesos es: " << promedio(pesos, N) << endl;

     return 0;
}

