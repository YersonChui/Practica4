// Fecha creaci�n: 17/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 8
// Problema planteado:En una f�brica de computadoras se planea ofrecer a los clientes un descuento que depender� del n�mero de computadoras que compre. Si las computadoras son menos de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada
//computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el precio total que el cliente debe pagar y el valor del descuento.

#include <iostream>
using namespace std;

double calcular_descuento(int n, double precio) {
    double descuento;
    if (n < 5){
        descuento = 0.1;
    } else if (n >= 5 && n < 10){
        descuento = 0.2;
    } else {
        descuento = 0.4;
    }
    return descuento *n * precio;
}//Calculara el descuento segun el numero de comp

double calcular_precio_final(int n, double precio, double descuento) {
    return n * precio - descuento;
}
// calcula precio a pagar
int main() {
    int n;
    double precio;
    double descuento;
    double precio_final;
  cout << "Ingrese el n�mero de computadoras compradas: ";cin >> n;
  cout << "Ingrese el precio de cada computadora: ";cin >> precio;
  // Llama las funciones
  descuento = calcular_descuento(n, precio);
  precio_final = calcular_precio_final(n, precio, descuento);
  cout << "El valor del descuento es: " << descuento << endl;
  cout << "El precio final a pagar es: " << precio_final << endl;

  return 0;
}

